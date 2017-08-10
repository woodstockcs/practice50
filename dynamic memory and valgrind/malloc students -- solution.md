# Registrar

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>

#define SIZE 4

int main(void)
{
    // allocate memory for dynamic arrays, and 'fill' them both
    int* id_array = malloc(SIZE * sizeof(int));
    float* gpa_array = malloc(SIZE * sizeof(float));
    
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
    
    // free memory allocated
    free(id_array);
    free(gpa_array);
}
```