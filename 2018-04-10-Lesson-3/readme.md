Lesson 3
===

> TODO

## Pointers

Pointer is a type of var that points to a memory, there is not diffrence between pointer to an int or to an array of chars.

An example that represent that pointer and array are treaded the same way:

```c
int strlen(char s[])
// Same as:
int strlen(char* s) // This one is better!
```

## Notes

* It's better to use `*` then `[]` in function arguments.