#include "main.h"

void _magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
	return;
}
void _class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	printf("%x\n", e_ident[EI_DATA]);
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Unknown %x\n", e_ident[EI_CLASS]);
	
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("Unknown %x\n", e_ident[EI_CLASS]);
}



/*void print_info(Elf64_Ehdr *header)
{
     	printf("ELF Header:\n");
	_magic(header->e_ident);
	_class(header);
	return;
}*/

/**
 * read_file - reads file
 * @header: header
 * @file: file
 */
void read_file(Elf64_Ehdr *header, char *file)
{
       	int o, r, c;

        o = open(file, O_RDONLY);
        if (o == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read file %s\n", file);
                exit(98);
        }
        r = read(o, header, sizeof(Elf64_Ehdr));
        if (r == -1)
        {
                dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", file);
                exit(98);
        }
        c = close(o);
        if (c == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
                exit(98);
        }
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

	header = malloc(sizeof(Elf64_Ehdr));
	/*for (i = 0; i < 4; i++)
	{
                if (header->e_ident[i] != 0x7F &&
                    header->e_ident[i] != 'E' &&
                    header->e_ident[i] != 'L' &&
                    header->e_ident[i] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }*/
	read_file(header, argv[1]);
	_magic(header->e_ident);
	_class(header->e_ident);
	close(open(argv[1], O_RDONLY));
	return (0);	
}
