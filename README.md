# Libft (library of Functions)

## Introduction

The first project in 42 school during the common core is that we are going to re-create library of function in C. Many people may think it is unnecessary to do that as so-called "don't reinvent the wheel". In contract, we are not trying to outperform the C library by previous creators but we rather train ourselves to be able to navigate the C code base. I was listening to an [interview](https://www.youtube.com/watch?v=OVwJ5EMTSK0&) where Dr.Chunk mentioned a phenomenon that many bootcamp graduates can't create a library fron the ground up because they didn't learn that way "I only know React framework" so I can't..." That's the key difference between a bootcamp graduate and a formal training in 42 school. We learn how to learn by starting anything from the scratch. It's called Seek First. 

## Metholodgy 

### ChatGPT
I decide to code every day for 2 hours. My requirement is not only to write them out, but also will record videos (<3m) for practicing reasoning. 

Since ChatGPT revolutionalize the way we learn, I will use it to help me get better at explaning. First, I will ask ChatGPT to provide a few examples about how to use a certain functions. For example, I don't know about `memset`, I will ask ChatGPT provides some examples and usecases. Then, I can type them out to get the feeling of it. Later, I will think about how to design the `ft_memset` on my own. 
The key thing is not to ask ChatGPT to write code but ask it to assist me and explain the code to me.

### Usecase collection
On the other hand, I have been roughly following some courses on coursera. The hard problem still has values. For example, I was aksed to write a C program to convert inputs of values from one measurement to another measure. i.e. 10 meters to 32.8084 feet. I was stuck in writing them; but I quickly googled some questions such as "how to extract numbers from a string in C" and "how to extract alphabets from a string in C". 

### Review schedule
I found out that lots of people don't have good learning habits. The biggest challenge for any learners is to stop forgetting. How to learn effective means how not to forget. The question is that we need to internalize things to commit to our long-term memory rather than reciting and forgetting after a few days. I have made mistakes like this for too long. 

My review schedule is 24 hours -> 3 days -> 5 days -> 2 weeks -> 1 month; 

### Output

I'd like to make a rough video to explain each function and code. it's an ideal but also I like to write a post about the code self. 

## Libft Functions

### `<ctype.h>`

- `ft_isalpha` - checks if an input is an alphabetic character
- `ft_isdigit` - checks if an input is a digit (0 through 9)
- `ft_isalnum` - checks if an input is an alphanumeric character
- `ft_isascii` - checks whether c fits into the ASCII character set
- `ft_isprint` - checks if an input is  any printable character
- `ft_toupper` - convert char from lowercase to uppercase
- `ft_tolower` - convert char from uppercase to lowercase

### <string.h>

- `ft_memset` - fill memory with a constant byte
- `ft-bzero` - zero a byte sring
- `ft_memcpy` - copy memory area *
- `ft_memove` - copy memory area*
- `ft_memchr` - scan memory for a character *
- `ft_memcmp` - compare memory areas *
- `ft_strlen` - calculate the length of a string
- `ft_strlcat` - concatenate string to an specific size
- `ft_strlcpy` - copy string to an specific size
- `ft_strchr` - locate character in string
- `ft_strrchr` - locate character in string
- `ft_strncmp` - compare two strings
- `ft_strnstr` - locate a substring in a string
- `ft_strdup` - creates a dupplicate for the string passed as parameter -> `malloc`

### <Stdlib.h>
- `ft_atoi` - convert a string to an integer
- `ft_calloc` - allocates memory and sets its bytes values to 0 -> `malloc`

### Non-standard functions
- `ft_substr` - returns a substring from a string
- `ft_strjoin` - concatenates two strings
- `ft_strtrim` - trims the beginning and end of string with specific set of chars
- `ft_split` - splits a string using a char as parameter
- `ft_itoa` - converts a number into a string

#### function
- `ft_strmapi` - applies a function to a each character of a string
- `ft_striteri` - applies a function to each character
- `ft_putchar_fd` - output a char to a file desciptor
- `ft_putstr_fd` - output a string to a file descriptor
- `ft_putendl_fd` - output a string to a file descriptor, followed by a new lne
- `ft_putnbr_fd` - output a number to a file descriptor

### Linked list function

- `ft_lstnew` - create a new list element
- `ft_lstadd_front` adds an element at the beginning of a list
- `ft_lstsize` - counts the number of elements in a list
- `ft_lstlast` - returns the last element of the list
- `ft_lstadd_back` - adds an element at the end of a list
- `ft_lstclear` - deletes and free list
- `ft_lstiter` - applies a function to each element of a list
- `ft_lstamp` - applies a function to each elemen of a list


## Tester

https://github.com/Abaker-Hype/42-Cursus-Tester
