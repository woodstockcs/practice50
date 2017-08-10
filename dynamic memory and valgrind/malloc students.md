# Registrar

## Prerequisites
Pointers; Loops

## Problem
You want to create two arrays to keep track of student id and gpa, but want them to be dynamic -- so that if more students register in the future, you can add them, too. To this purpose, allocate memory for these arrays of size <code>SIZE</code> dynamically, using <code>malloc()</code>. Don't forget to <code>free()</code> this memory. Example output:
```c
jharvard@run.cs50.net (~): ./a.out
please enter student id:
47367
please enter student gpa:
3.2
please enter student id:
73923
please enter student gpa:
3.4
please enter student id:
23984 
please enter student gpa:
2.9
please enter student id:
72834
please enter student gpa:
3.77

student 1
id: 47367        gpa: 3.20
student 2
id: 73923        gpa: 3.40
student 3
id: 23984        gpa: 2.90
student 4
id: 72834        gpa: 3.77
```

Don't forget to use valgrind to make sure you <code>free</code>-d all memory allocated!

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

#define SIZE 4

int main(void)
{
    // TODO: allocate memory for dynamic arrays, and 'fill' them both
    int* id_array = // TODO
    float* gpa_array = // TODO
    
    // get input with student data
    for (int i = 0; i < SIZE; i++)
    {
        printf("please enter student id:\n");
        int x = get_int();
        id_array[i] = x;
        printf("please enter student gpa:\n");
        float y = get_float();
        gpa_array[i] = y;
    }
    
    // print ids and gpas
    for (int i = 0; i < SIZE; i++)
    {
        printf("student %i\nid: %i \t gpa: %.2f\n", i + 1, id_array[i], gpa_array[i]);
    }
    
    // TODO: Free memory allocated
}
```