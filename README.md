# Libft

This project consists of programming a library in C. The library has a lot of general purpose functions.

## Functions

### libc functions
These functions have the same prototypes and implement the same behaviors as the original functions. They must be as described in the man.

- isalpha
It checks whether a character is an alphabet or not.
- isdigit
It checks whether a character is numeric character(0-9) or not.
- isalnu
It checks whether the argument passed is an alphanumeric character (alphabet or number) or not.
- isascii
It tests for an ASCII character (in the range 0 to 127). Returns: Nonzero if c is an ASCII character; otherwise, zero.
- isprint
- strlen
- memset
It copies the character c (an unsigned char) to the first n characters of the string pointed to.
- bzero
It erases the data in the n bytes of the memory. Starting at the location pointed to by s, by writing zeros.
- strlcat
It concatenates strings. It appends string src to the end of dst.
- toupper
- tolower
- atoi
It converts the string to int representation.

**Functions of copying one vector into another**
memcpy, memmove and strlcpy are functions used to copy strings and blocks of memory. Although all three functions serve a similar purpose, there are some differences between them in terms of how they handle memory and data.
- memcpy
The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. That is, memcpy does not check for overlap between the source and destination. If the source and destination overlap, the behavior of memcpy is undefined.
- memmove
The memmove function is used to copy a memory block from one location to another, even if the memory blocks overlap. If the source and destination overlap, memmove handles this case safely.
- strlcpy
It copies characters from the string src to the string dst.
The destination string is always terminated with a null character ('\0'), regardless of the number of characters copied.
The function returns the length of the source string, which can be useful for checking if the string has been truncated.

**Ocurrence functions**
- strchr
It locates the first occurrence of c (converted to a char) in the string pointed to by s. It returns a pointer to the first occurrence of the character. The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
- strrchr
It is like strchr, but it searches for the last occurrence of the character c.
- memchr
It locates the first occurrence of c (converted to an unsigned char) in string s. It returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
- strnstr
It locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.

**Comparation functions**
- strncmp
It compares at most the first n bytes of str1 and str2. It returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.
- memcmp
It compares byte string s1 against byte string s2.

**Functions that use malloc**
- calloc
It allocates memory like malloc, but in a slightly different way. It allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
- strdup
It allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).

### Additional functions

Functions that either are not from the libc library, or are but in a different way.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd


