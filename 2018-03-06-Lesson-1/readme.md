Lesson 1
========
> In this lesson we learned how to setup development env for C, how to write code and compile it.

# Setup for the course
For this course we will use the following setup:
* Ubuntu 16.2
* Eclipse (recomended)

# How to compile
When compilling run we only run with the following flags:

```
gcc -Wall -ansi -pedantic -lm file.c -o output
```

## Flags:
* Wall - Warrnings all (show all warrnings).
* ansi - Using the ANSI standard.
* pedantic - Being more pedantic about the code fromatting and writing.
* l<paget-name> - Importing the relevant packegt.
* o - output.

## Makefile
Makefile is a file used by the command `make`, this file classefy what is the procces of compiling the files.
We need this file for evrey Maman we send under the name "`makefile`".

### Format
The format for the `makefile` is:

```
job: file.c to.c watch.c
	echo "command!"
```

### How to run
Just run:
```
$ make
```

### Basic file
Here is a basic `makefile` that will compile all the .c files:
```
all: *.c
	gcc -Wall -ansi -pedantic -lm *.c -o output
```

# Comments
Comment where needed, use common sense.

To comment in ANSI standart we need to comment like this:
```c
/*
This is a valid comment
*/
// This is not a vaild comment
```

# How to write C
To program in C we need to create .c file, in this file we can program in C.

## Include
Most of the time we to add the following include to be able to print and scan data from the user:

```c
#include <stdio.h>
```

## Main function
We will need a function named `main`, this function will run when the file is loaded, the function will return an int,  success code (`0`) or an error code (`1`).

For exmple:
```c
#include <stdio.h>
int main() {
  printf("Hello world!");
  
  return 0;
}
``` 

# Input and output files
Sometimes we want to get input from user (using keyboard) but for the mamans we need to supply sample inputs and expected outputs.

To do so we need to create a file for inputs (`inputs.txt`) and run the file while piping the inputs to it, for exmple:

```
$ file < inputs.txt
```

For out put we can pipe the output of the program to a file, for exmple:
```
$ file > output.txt
```

And of course we can pipe in and out the inputs and outputs:
```
$ file < inputs.txt > output.txt
```

## In the code
To get an input from the user we just need to use `scanf`. 
To output to the user we just need to use `printf`.
> Both `printf` and `scanf` are included by `stdio.h`

# Homework
* [ ] Install Ubuntu 16.4 (from the university site).
* [ ] Install Eclipse.
* [ ] Maman 11.

# TODO
Hint for maman 11: use `strchr`.
