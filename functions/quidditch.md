# Quidditch

## Prerequisites
None

## Problem
You want to calculate the final score for a team that has just participated in an exciting quidditch match. Building on the code below, implement a function that takes two variables as input — an int indicating the number of times the team got the Quaffle through the other team's hoops, and a bool indicating whether or not they caught the snitch -- and returns that team's final score (what would the return type be?).  

Recall that each 'goal' in quidditch is worth 10 points, and that catching the snitch is worth 150 points.

To import the Distribution Code as a new file in the cs50 IDE, or use the command
```wget https://raw.githubusercontent.com/woodstockcs/practice50/master/functions/quidditch.c```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// TODO: function prototype

int main(void)
{
    printf("Number of times your chasers got the quaffle through a hoop: ");
    int goal_num = get_int();
    printf("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    bool snitch_caught = get_int();
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// TODO: function definition

```
