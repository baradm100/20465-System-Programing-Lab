# Summary

## Data Types

Default data types:

| Type           | Size | Value Range
| -------------- | ---- | -----------
| char           | 1    | 0 to 255
| unsigned char  | 1    | 0 to 255
| signed char    | 1    | -128 to 127
| int            | 4    | -2,147,483,648 to 2,147,483,647
| unsigned int   | 4    | 0 to 4,294,967,295
| short          | 2    | -32,768 to 32,767
| unsigned short | 2    | 0 to 65,535
| long           | 4    | -2,147,483,648 to 2,147,483,647
| unsigned long  | 4    | 0 to 4,294,967,295

## Const

A variable that doesn't change:

```c
# define MAX 100
```

## String

An array of chars, end with `'\0'`.

## Boolean

```
true => 1
false => 0
```

## Operand ++

++ Before:
```c
int n = 5;
int x = ++n;
printf("n=%d;x=%d", n, x); // n=6;x=6
```

++ After:

```c
int n = 5;
int x = n++;
printf("n=%d;x=%d", n, x); // n=6;x=5
```

## Function

```
type name(args) {
    code
}
```

Prototype:

```c
// type name(args);
int barFunction(int a, int b);
// same as
int barFunction(int c, int);
// no overloading!
double barFunction(int a, int b);
```

## Static

**Static in function** = In the *program* scope.

```c
void printMe() {
    static int i = 0; // Will be declared in the first run only
    i++;
    printf("%d", i); // Will output the number of calls of the function
    return;
}
```

**Static in outside variable** = In the *file* scope.

## Preprocessor

Include a file in other file, if included more the once you will need:

```c
#ifndef koko
#define koko
// Code goes here
#endif
```

## Macro

Like const but can hold any thing:

```c
#define MAX 25 
#define MAX_FUNCTION(A, B) ( (A) > (B) ? (A) : (B) ) 

int x = MAX_FUNCTION(5,6);
```

## Pointers

Point to a memory address.

```c
// Arrays
int arr[50]; // It's a pointer to an array
arr[2] == arr + 2; // Moving the pointer

// Vars
int b = 5;
int *bPointer = &b; // Pointer to b
*bPointer+= 1; // Changing the value of b
printf("%d", *bPointer); // Print the value of b

// Functions
int (*f_ptr)(int a, int b) // a pointer to a function with 2 int arguments returning an int
f_ptr = max;
f_ptr(a, b); // Will call the function max with a,b
```

## Dynamic memory allocation

Setting memory space will the code is running.

`size_t` is a unsigned int from `<stddef.h>` represent the bit size of things

`void *malloc(size_t size)` allocate memory from the size sent to is, returns a pointer to the place, `NULL` if failed.

`void *calloc(size_t n, size_t size)` allocate memory from the size and number of times, set all bits in memory to `0`, returns a pointer to the place, `NULL` if failed.

`void *realloc(void *ptr, size_t size)` Add to the pointer more memory, if can't move the pointer to a new place with the added space, if can't returns `NULL` (Tip: use middle pointer before changing the real pointer in case the operation failed).

`void free(void *ptr)` Free the pointer from memory

## main() Arguments

`int main(int argc, char *argv[]);`

`argc` = Argument count

`argv` = Arguments

## Structure

Create data structure

```c
struct point {
    int x;
    int y;
}

struct point pt = {1,2};
```

## typedef

Create new type of variable.

```c
typedef struct point {
    int x;
    int y;
} Point

Point pt = {1,2};
```