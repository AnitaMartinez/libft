# Libft

This project consists of programming a library in C. The library has a lot of general purpose functions.

## Functions

### libc functions
These functions have the same prototypes and implement the same behaviors as the original functions. They must be as described in the man.

- **isalpha**.
It checks whether a character is an alphabet or not, according to ASCII code (between 65 and 90 and between 97 and 122).
- **isdigit**.
It checks whether a character is numeric character (0-9) or not.
- **isalnu**.
It checks whether the argument passed is an alphanumeric character (alphabet or number) or not.
- **isascii**.
It tests for an ASCII character (in the range 0 to 127). Returns: Nonzero if c is an ASCII character; otherwise, zero.
- **isprint**.
It tests for any printing character, including space.
- **strlen**.
It computes the length of the string.
- **memset**.
It copies the character c (an unsigned char) to the first n characters of the string pointed to.
- **bzero**.
It erases the data in the n bytes of the memory. Starting at the location pointed to by s, by writing zeros.
- **strlcat**.
It concatenates strings. It appends string 'src' to the end of 'dst'.
It returns the total length of the string it tries to create, that means the initial length of 'dst' plus the length of 'src'.
- **toupper**.
It converts a lower-case letter to the corresponding upper-case letter.
- **tolower**.
It converts an upper-case letter to the corresponding lower-case letter.
- **atoi**.
It converts the string to int representation.

**Functions of copying one vector into another**

memcpy, memmove and strlcpy are functions used to copy strings and blocks of memory. Although all three functions serve a similar purpose, there are some differences between them in terms of how they handle memory and data.
- **memcpy**.
The memcpy() function copies n bytes from memory area 'src' to memory area 'dst'.  If 'dst' and 'src' overlap, behavior is undefined. That is, memcpy does not check for overlap between the source and destination. If the source and destination overlap, the behavior of memcpy is undefined.
- **memmove**.
The memmove function is used to copy a memory block from one location to another, even if the memory blocks overlap. If the source and destination overlap, memmove handles this case safely.
- **strlcpy**.
It copies characters from the string 'src' to the string 'dst'.<br>
The destination string is always terminated with a null character ('\0'), regardless of the number of characters copied.
The function **returns the length of the source** string, which can be useful for checking if the string has been truncated.

**Ocurrence functions**
- **strchr**.
It locates the first occurrence of 'c' in the string. It returns a pointer to the first occurrence of the character.<br> 
The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
- **strrchr**.
It is like strchr, but it searches for the last occurrence of the character c.
- **memchr**.
It locates the first occurrence of c (converted to an unsigned char) in the buffer s. It returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
- **strnstr**.
It locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.

**Comparation functions**
- **memcmp**.
It compares byte string 's1' against byte string 's2'.
If they are equal, it returns 0; if they are not equal, it returns the subtraction of the first different character.
- **strncmp**.
It compares at most the first 'n' bytes of 'str1' and 'str2'. It returns an integer greater than, equal to, or less than 0, according as the string 's1' is greater than, equal to, or less than the string 's2'.
As it is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.

**Functions that use malloc**
- **calloc**.
It allocates memory like malloc, but in a slightly different way. It allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
- **strdup**.
It allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).

### Additional functions

Functions that either are not from the libc library, or are but in a different way.

- **ft_substr**.
It returns a substring of the string 's'. The substring starts from index 'start' and has a maximum length 'len'.
- **ft_strjoin**.
It returns a new string, formed by the concatenation of 's1' and 's2'.
- **ft_strtrim**.
It removes all characters from the string 'set' from the beginning and from the end of 's1'.
- **ft_split**.
It returns an array of strings resulting from splitting the string 's' into substrings using the 'c' character as delimiter. The array must end with a NULL pointer.
- **ft_itoa**.
It generates a string that represents the integer value received as an argument.
- **ft_strmapi**.
To each character of the string 's', apply the function 'f' giving as parameters the index of each character within 's' and the character itself. Generates a new string with the result of the successive use of 'f'.
- **ft_striteri**.
To each character of the string 's', it applies the 'f' function giving as parameters the index of each character within 's' and the address of the character itself, which can be modified if necessary.
- **ft_putchar_fd**.
- **ft_putstr_fd**.
- **ft_putendl_fd**.
- **ft_putnbr_fd**.


