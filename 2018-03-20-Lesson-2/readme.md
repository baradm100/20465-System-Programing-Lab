Lesson 2
========
> Mainly strings and a bit of arrays

# #String
An array of chars, we can print string with `printf("%s", str)`.

The function will print until the char `\0` (ASCI value = 0), this char represent the end of the string.

### Char
Char is (guess what?) is a character, in C char is a representation of the char in the ASCI table and behind the screen the char is converted to a number, because of that you can treat a char as a number, for example:

```c
int a = 'a' + 'A' - 100;
```

## Pointers
A type of var that points to a place in the memory (RAM), represented as hex value but we can treat as a number.

For example:
```c
char str[] = "Hello world!";
printf("%s", str); /* => "Hello world!" */
printf("%s", str + 1); /* => "ello world!" */
```

Array in C is just a pointer to allocated memory.

## Input methods
### getchar
Get input from the user and return one char.

```c
char c;
c = getchar();
putchar(c);

```

### fgets
Get a string from the user (or file) at the max size that was set, the string is terminated with `\0`.
If we sent 80 as the max size, we will get a string with 79 chars and the finale char is `\0`.
> Warring! set the size of the array with extra space to include the '\0'

### scanf
Getting the input from the user (or file), strong method.
Can return string, char, int, float, etc.
Just use the correct [format](#format).

## Output methods
### putchar
Puts only a char, can resive only a char or an int (that represent a char in ASCI):

```c
putchar('a');
putchar('\n');
putchar(121);
```
### printf
Printing data to the user, strong method.
Just use the correct [format](#format).

## Format
| Specifier | Output
| --------- | --------
| c         | Character
| d         | Singed decimal integer
| f         | Decimal floating point
| s         | String of characters
| p         | Pointer address

You can limit the output/input by adding a number in front of the specifier, for example:
```c
/* Scanning only 80 string of characters */
scanf("%80s");
```

## Tips
* No need for `#include` in tests when only writing the function.
* In C `0` is considered `false` in boolean statements (as `null` and `undefined` in javascript or ruby).

## Homework
* [x] Write a function that get a string and a char and return the number of occurrences (no matter if upper or lower case).
* [x] Fix typos.
* [x] Add input and output methods.
