# Project 0: Dynamic Library - libdynamic.so
This project involves creating a dynamic library called libdynamic.so that contains various functions. The library should be created based on the provided function prototypes and must include all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If any of the above functions have not been implemented, it is required to create empty functions with the correct prototypes.

# File Description
The project includes the following files:

# libdynamic.so: The dynamic library file containing the implemented functions.
main.h: The header file containing the prototypes of all the functions.
Usage
# Compiling the Test Program
To compile a test program that uses the libdynamic.so library, follow these steps:

# shell
gcc -Wall -pedantic -Werror -Wextra -L. <test_program.c> -ldynamic -o <output_file>
Replace <test_program.c> with the name of your test program source file, and <output_file> with the desired name for the output executable file.

# Linking the Library
Before running the compiled test program, ensure that the library is properly linked. By default, the linker searches for libraries in standard system directories. However, if the library is not found in those directories, it can be added using the LD_LIBRARY_PATH environment variable. Follow these steps to link the library:

# shell

export LD_LIBRARY_PATH=.:
This command appends the current directory (containing libdynamic.so) to the library search path.

# Running the Test Program
After compiling and linking, you can run the test program using the following command:
# ./<output_file>
Replace <output_file> with the name of the output executable file.

# Repository
The project files can be found in the following repository:

GitHub repository: alx-low_level_programming

Directory: 0x18-dynamic_libraries

# Files:

libdynamic.so
main.h
1-create_dynamic_lib.sh
Note: Replace username with the appropriate username in the GitHub URL.

# Credits
This project is part of the ALX Low-Level Programming curriculum. It was created by the ALX team.
