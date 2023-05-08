File I/O in Linux
In Linux, file I/O (Input/Output) operations involve the manipulation of files and directories. The operating system provides system calls and functions that enable programs to perform file I/O operations. This README file will cover two functions that deal with file I/O in Linux.

read_textfile
The read_textfile function reads a text file and prints its content to the standard output. It takes in two parameters:

filename: a pointer to the name of the file to read
letters: the number of characters to read from the file
The function returns the actual number of characters read and printed on success. On failure, it returns 0. The failure scenarios include:

if the file cannot be opened or read
if filename is NULL
if the write function fails or does not write the expected amount of bytes
Prototype
c
Copy code
ssize_t read_textfile(const char *filename, size_t letters);
Usage
c
Copy code
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
create_file
The create_file function creates a file with the specified name and writes a given text into it. It takes in two parameters:

filename: a pointer to the name of the file to create
text_content: a NULL-terminated string to write to the file
The function returns 1 on success and -1 on failure. The failure scenarios include:

if filename is NULL
if the file cannot be created
if the file cannot be written
if the write function fails or does not write the expected amount of bytes
If the file already exists, its content is truncated. The file is created with permissions rw-------.

Prototype
c
Copy code
int create_file(const char *filename, char *text_content);
Usage
c
Copy code
#include <stdio.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
