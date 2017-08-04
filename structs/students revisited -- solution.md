# Students Revisited

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define STUDENTS 5

typedef struct
{
    string name;
    int year;
    float gpa;
    // new student characteristics
    string house;
    int huid;
    
} student;

int main (void)
{
    // declare array of class structs
    student classroom[STUDENTS];
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("Please enter student name (e.g. \"Mark Anthony\"): ");
        classroom[i].name = get_string();
        printf("Please enter student's year (e.g. 2019): ");
        classroom[i].year = get_int();
        printf("Please enter student's GPA (e.g. 3.2): ");
        classroom[i].gpa = get_float();
        // take in input for new student characteristics
        printf("Please enter student's house (e.g. 'Cabot'): ");
        classroom[i].house = get_string();
        printf("Please enter student's HUID (e.g. 60597648): ");
        classroom[i].huid = get_int();
    }
    
    // print student info
    printf("The students' info is:\n");
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("name: %s year: %i house: %s HUID: %i GPA: %.2f\n", classroom[i].name, classroom[i].year, classroom[i].house, \
             classroom[i].huid, classroom[i].gpa);
    }
}
```