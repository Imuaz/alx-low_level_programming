#ifndef MAIN_H
#define MAIN_H

/*
 * file: main.h
 * Authr: Idris Muazu Yakub
 * Decs: Header file that contains the prototypes of all the
 * functions used in C-File i/o project
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
