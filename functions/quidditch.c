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
