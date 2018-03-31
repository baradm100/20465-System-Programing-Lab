Lesson 2
========
> Mainlly strings and a bit of arrays

# String
An array of chars, we can print string with `printf("%s", str)`.

The function will print until the char `\0` (ASCI value = 0), this char represent the end of the string.

## Char
Char is (gues what?) is a character, in C char is a represention of the char in the ASCI table and beaind the screen the char is converted to a number, beacuse of that you can treat a char as a number, for exmple:

```c
int a = 'a' + 'A' - 100;
```

# Pointers
A type of var that points to a place in the memory (RAM), represented as hex value but we can treat as a number.

For exmple:
```c
char str[] = "Hello world!";
printf("%s", str); /* => "Hello world!" */
printf("%s", str + 1); /* => "ello world!" */
```

Array in C is just a pointer to allocated memory.

# Input methods
> TODO: Do this later at home
## getchar
> TODO: finish
## fgets
> TODO: finish
## scanf
> TODO: finish

# Tips
* No need for `#include` in tests when only writting the function.
* In C `0` is considered `false` in boolean statmens (as `null` and `undefined` in javascript or ruby).

## Homework
* [ ] Write a function that get a string and a char and return the number of occerentions (no matter if capitel or lowwer case).
* [ ] Fix typos
