#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_info(Elf64_Ehdr *header);
void read_file(Elf64_Ehdr *header, char *file);
void _magic(unsigned char *e_ident);
void _class(unsigned char *e_ident);
#endif
