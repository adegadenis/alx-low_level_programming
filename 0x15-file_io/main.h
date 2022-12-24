#ifndef MAIN_H
#define MAIN_H

/*
 * File:main.h
 * Auth: Denis Adega
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif /* MAIN_H */
