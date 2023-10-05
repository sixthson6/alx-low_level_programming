#include "main.h"

/**
 * get_elf - determiner elf file type
 * @ehdr: ptr to struct of ELF
 *
 * Return: Nothing
 */
void get_elf(Elf64_Ehdr *ehdr)
{
	printf("%-35s", "Type:");
	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	}
}



/**
 * main - entry point for program to get header of ELF file
 * @argc: arg of count
 * @argv: arg of array
 *
 * Return: 1 on success, error code on failure
 */
int main(int ac, char *av[])
{
	printf("ac:%d, av:%p\n", ac, (void *)*av);
	return (1);
}
