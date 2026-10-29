#include<stdio.h>
int main()
{
    int seceret = 25;
    int guess;
    int attempt = 0;
    printf("Guess the NUMBER \n");
    scanf("%d",&guess);
    while(guess != seceret)
    {
        attempt++;
        if(guess < seceret)
        {
            printf("TOO LOW TRY AGAIN.\n");
        }
        else
        {
            printf("TOO HIGH TRY AGAIN.\n");
        }
        printf("\n Guess a number");
        scanf("%d",&guess);
    }
    attempt++;
    printf("\nCongratulations ! You guessed the correct number.\n");
    printf("Total attempt: %d\n", attempts);
    printf("G  A  M  E       O  V  E  R");
    
    return 0;
}