#!/bin/bash
source_files=$(ls *.c)
for file in $source_files
do
	gcc -c "$file" -o "${file%.c}.o"
done
ar rcs liball.a *.o
