# Hash Tables

This project implements a hash table data structure in the C programming language. The hash table is designed to handle collisions using chaining. The project aims to provide an understanding of hash functions, hash tables, and their applications.

## Learning Objectives

By completing this project, you are expected to be able to explain the following concepts:

- What is a hash function?
- What makes a good hash function?
- How does a hash table work and how to use it?
- What is collision and what are the main ways to handle collisions in a hash table?
- What are the advantages and drawbacks of using hash tables?
- What are the most common use cases of hash tables?

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should use the Betty style, which will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed
- Each file should contain no more than 5 functions
- The C standard library is allowed to be used
- Function prototypes should be included in the header file called `hash_tables.h`
- Header files should be include guarded

## Data Structures

The project uses the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tasks

The project consists of several tasks, each addressing a specific aspect of hash tables. The tasks are as follows:

0. `hash_table_create`: Write a function that creates a hash table.
1. `hash_djb2`: Write a hash function implementing the djb2 algorithm.
2. `key_index`: Write a function that gives you the index of a key.
3. `hash_table_set`: Write a function that adds an element to the hash table.
4. `hash_table_get`: Write a function that retrieves a value associated with a key.
5. `hash_table_print`: Write a function that prints a hash table.
6. `hash_table_delete`: Write a function that deletes a hash table.

It is encouraged to work together on a set of tests.

## Testing

The Python dictionaries are implemented using hash tables, and understanding how they work can be beneficial in understanding the project. Some test cases and collision examples are provided in the project description for testing and understanding the implementation.

## Copyright and Plagiarism

You are responsible for creating your own solutions for the project tasks. Plagiarism, including copying and pasting someone else's work, is strictly forbidden and will result in removal from the program. The project's content should not be published.

**Copyright © 2023 ALX. All rights reserved.**
