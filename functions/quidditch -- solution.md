# Quidditch

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function prototype
int final_score(int goals, bool snitch);

int main(void)
{
    printf("Number of times your chasers got the quaffle through a hoop: ");
    int goal_num = get_int();
    printf("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    bool snitch_caught = get_int();
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// function definition
int final_score(int goals, bool snitch)
{
    int score = goals * 10;
    if(snitch)
        score += 150;
    return score;
}
```