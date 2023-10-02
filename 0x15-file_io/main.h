#ifndef MAIN_H
#define MAIN_H

#define MAX_LEN 1024

#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
