#include "main.h"

/**
 * print_error - print error message
 * @message: error message
 *
 * Return: Nothing
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - print contents of elf header
 * @header: header information
 *
 * Return: Nothing
 */

void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x", header->e_ident[i]);
	printf("\n");

	printf("  Class:			%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("  Data:				%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's compliment, little endian" : "2's compliment, big endian");
	printf("  Version:			%d\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:			%s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX -System V" :  "Other");
	printf("  ABI Version:			%d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:				%s\n", header->e_type == ET_REL ?
			"REL (Relocatable file)": header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			header->e_type == ET_DYN ? "DYN (Shared object file)" :
			header->e_type == ET_CORE ? "CORE (Core file)": "Unknown");
	printf("  Entry point address:		0x%lx\n", header->e_entry);
}

/**
 * main - Entry Point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Failed to open the file");
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		print_error("Error: Failed to read the ELF file");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		printf("Error: Not an ELF file");
	}

	print_elf_header(&header);

	if (close(fd) == -1)
	{
		print_error("Error: Failed to close the file");
	}

	return (0);
}
