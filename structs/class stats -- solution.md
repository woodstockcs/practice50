# Class Stats

## Possible Solution
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
        schedule[i].name = get_string();
        printf("Please enter name of department (e.g. \"English\"): ");
        schedule[i].department = get_string();
        printf("Please assign an int value between 1 and 5 to your overall experience of the class: ");
        schedule[i].overall_rank = get_int();
        printf("Please assign an int value between 1 and 5 to your overall experience with the professor: ");
        schedule[i].prof_rank = get_int();
        printf("Please assign an int value between 1 and 5 to the overall difficulty of the class: ");
        schedule[i].difficulty = get_int();
    }
    
    // print statistics
    float overall_avg = 0, prof_avg = 0, difficulty_avg = 0;
    for (int i = 0; i < CLASS_NUM; i++)
    {
        overall_avg += schedule[i].overall_rank;
        prof_avg += schedule[i].prof_rank;
        difficulty_avg += schedule[i].difficulty;
    }
    overall_avg /= CLASS_NUM;
    prof_avg /= CLASS_NUM;
    difficulty_avg /= CLASS_NUM;
    
    printf("the average overall rank, professor rank, and difficulty of the classes you took this semester are (respectively): \
        %.2f, %.2f and %.2f\n", overall_avg, prof_avg, difficulty_avg);
}
```