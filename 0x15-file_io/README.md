# File I/O in Linux - Project 0: Tread lightly, she is near
The following is a description of the project 0 of the 0x15-file_io directory from the alx-low_level_programming repository. The project consists of two C functions for handling file input and output.

# read_textfile function
This function reads a text file and prints its contents to the POSIX standard output. The function prototype is:

c
Copy code
ssize_t read_textfile(const char *filename, size_t letters);
where:

filename: a pointer to a string containing the name of the file to read
letters: the number of letters to read and print from the file
The function returns the actual number of letters it could read and print, and if the file cannot be opened or read, it returns 0. In case the filename parameter is NULL, the function also returns 0. If write fails or does not write the expected amount of bytes, the function returns 0.

# Usage
To use this function, include the main.h header file in your C file and call the function as follows:

c
Copy code
ssize_t n = read_textfile("filename.txt", 1024);
In this example, the function will attempt to read and print the first 1024 characters from the filename.txt file.

# create_file function
This function creates a file and writes a given text to it. The function prototype is:

c
Copy code
int create_file(const char *filename, char *text_content);
where:

filename: a pointer to a string containing the name of the file to create
text_content: a pointer to a string containing the text to write to the file
The function returns 1 on success, -1 on failure (file cannot be created, file cannot be written, write "fails," etc.). The function also sets the created file permissions to rw-------. If the file already exists, the function truncates it. If the filename parameter is NULL, the function returns -1. If the text_content parameter is NULL, the function creates an empty file.

# Usage
To use this function, include the main.h header file in your C file and call the function as follows:

c
Copy code
int res = create_file("filename.txt", "Hello, world!\n");
In this example, the function will create a new file named filename.txt and write the string "Hello, world!\n" to it. If the file already exists, it will be truncated. The function will return 1 on success and -1 on failure.
