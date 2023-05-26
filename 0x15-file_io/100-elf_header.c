#include "main.h"
#include <elf.h>

void print_info(Elf64_Ehdr *header)
{
        long unsigned int i;

        printf("ELF Magic Number: ");
        for (i = 0; i < sizeof(header->e_ident); ++i)
                printf("%02x ", header->e_ident[i]);
        printf("\n");
        printf("Class: %d\n", header->e_ident[EI_CLASS]);
        printf("Data: %d\n", header->e_ident[EI_DATA]);
        printf("Version: %d\n", header->e_ident[EI_VERSION]);
        printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
        printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
        printf("Type: %d\n", header->e_type);
        printf("Machine: %d\n", header->e_machine);
        printf("Version: %d\n", header->e_version);
        printf("Entry point: 0x%lx\n", header->e_entry);
        printf("Program header offset: 0x%lx\n", header->e_phoff);
        printf("Section header offset: 0x%lx\n", header->e_shoff);
        printf("Flags: 0x%x\n", header->e_flags);
        printf("Size of this header: %d\n", header->e_ehsize);
        printf("Size of program headers: %d\n", header->e_phentsize);
        printf("Number of program headers: %d\n", header->e_phnum);
        printf("Size of section headers: %d\n", header->e_shentsize);
        printf("Number of section headers: %d\n", header->e_shnum);
        printf("Section header string table index: %d\n", header->e_shstrndx);
}

/**
 * main - prints contents elf file
 * @argc: arg count
 * @argv: argv vector/arr
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	Elf64_Ehdr *header;
	int o, r, c;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", o);
		exit(98);
	}
	print_info(header);
	return (0);
	
	
	
	/*Elf64_Ehdr *header;
	long unsigned int i;

	if (argc != 2)
	{
		printf("Incorrect number of args");
		return 1;
	}
	i = fopen(argv[1], "r");
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	i = fread(&header, sizeof(Elf64_Ehdr), 1, file);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}
	print_info(header);
	i = pclose(file);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %s\n", argv[1]);
		exit(98);
	}
	return (0);*/
}

