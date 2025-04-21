#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator with current time as seed
    srand(time(0));
       int num = (rand() % 101);  // Generates a number from 0 to 100
       printf("THE COMPUTER HAVE GENERATED A RANDOM NUMBER BETWEEN 0 TO 100\n");
        // Optional: add a short delay or wait for user input if needed
        // getchar();  // Uncomment this if you want to pause after each number
    int guessnum;
    int guesses=0;
    do{
        printf("guess a number between 0 to 100 : ");
        scanf("%d",&guessnum);
        if(guessnum>num){
            printf("please guess smaller number\n");
        }
        else if(guessnum<num){
            printf("please guess greater number\n");
        }
        else{
            printf("congrats you have guessed correct number\n");
        }
        guesses++;
    }while(guessnum!=num);
    printf("the number of guesses you have taken is : %d\n",guesses);


}
