// code : c

#include <stdio.h>

sturct player
{
    char name[20];
    int score;
};

int main()
{
    struct player p1;
    p1.name = "Hello";
    p1.score = 0;
    struct player p2;
    p2.name = "World";
    p2.score = 0;

    char input_name[20];
    int input_score;

    while(1)
    {
        printf("\nEnter the score :");
        scanf("%d", &input_score);
        printf("\nEnter the team name :")
        scanf("%s", &input_name);

        if (input_name == p1.name)
        {
            p1.score += input_score;
        }
        else if (input_name == p2.name)
        {
            p2.score += input_score;
        }
        else
        {
            printf("\nInvalid team name");
        }
    }

    return 0;
}
