# include <stdio.h>
int main()
{
    int secret = 25;
    int guess;
    int attempts=0;
    printf("====== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1and 50:");
    scanf("%d", &guess);

    while(guess != secret)
    {
        attempts++;

        if (guess > secret)
        {
            printf("too high! try again.\n");
        }
        else
        {
            printf("too low! try again.\n");
        }
        printf("\nguess a number between 1and 50:");
        scanf("%d", &guess);
    }
    attempts++;
    printf("\ncongratulation! you guessed the correct number.\n");
    printf("Total Attempts: %d\n",attempts);

    printf("===== GAME OVER =====");

    return 0;
}