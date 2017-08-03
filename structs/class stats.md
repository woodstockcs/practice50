# Class Stats

## Prerequisites
Loops

## Problem
The below program has a structure called <code>class</code> defined, to make it easier to calculate various statistics about the classes you take in a given semester. In the below, please take in input from user for various parameters for all of his classes in a given semester (see first 5 <code>TODO</code>s). Then, calculate and print the average overall rank, professor rank, and difficulty of the classes the user input for the semester (under teh 6th and last <code>TODO</code>).

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

#define CLASS_NUM 4

typedef struct
{
    string name; // name of class, e.g. "MATH 55a"
    string department; // name of department, e.g. "English"
    int overall_rank; // integer value between 1-5
    int prof_rank; // integer value between 1-5
    int difficulty; // integer value between 1-5
} class;

int main (void)
{
    // declare array of class structs
    class schedule[CLASS_NUM];
    for(int i = 0; i < CLASS_NUM; i++)
    {
        printf("Please enter class name (e.g. \"MATH 55a\"): ");
        // TODO -- read input into the struct

        printf("Please enter name of department (e.g. \"English\"): ");
        // TODO -- read input into the struct

        printf("Please assign an int value between 1 and 5 to your overall experience of the class: ");
        // TODO -- read input into the struct

        printf("Please assign an int value between 1 and 5 to your overall experience with the professor: ");
        // TODO -- read input into the struct

        printf("Please assign an int value between 1 and 5 to the overall difficulty of the class: ");
        // TODO -- read input into the struct

    }
    
    // print statistics
    float overall_avg = 0, prof_avg = 0, difficulty_avg = 0;
    // TODO: calculate the average overall rank, professor rank, and difficulty of the classes the user took this semester
    
    printf("the average overall rank, professor rank, and difficulty of the classes you took this semester are (respectively): \
        %.2f, %.2f and %.2f\n", overall_avg, prof_avg, difficulty_avg);
}
```