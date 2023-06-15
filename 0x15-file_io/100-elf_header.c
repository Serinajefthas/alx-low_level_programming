#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void print_elf_header(char *filename);

void print_elf_header(char *filename) {
    int fd, i;
    Elf64_Ehdr elf_header;

    fd = open(filename, O_RDONLY, 0);
    read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Not a valid ELF file: %s\n", filename);
        close(fd);
        return;
    }
    printf("ELF Header:\n");
    printf("  Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                          %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                           %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                        %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                         %d\n", elf_header.e_ident[EI_OSABI]);
    printf("  ABI Version:                    %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                           0x%04x\n", elf_header.e_type);
    printf("  Entry point address:            0x%lx\n", (long)elf_header.e_entry);
    close(fd);
    return;
}
int main(int argc  __attribute__((__unused__)), char *argv[])
{
    print_elf_header(argv[1]);
    return 0;
}
