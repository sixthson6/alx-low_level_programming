#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);

#endif
