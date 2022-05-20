// GAME:
/* In this game. Program just pick a random number. And player have to guess it by inputting it's 
gussed number. If it's below that random number progoram will show a message that it's 'Smaller'.
Try Greater Number. If it's greater then program show a message that it's 'Greater'. 
Try a smaller number. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number ,  guess , nguesses =1 ;
    printf("                             --WELCOME TO THE 'GUESS THE NUMBER' GAME--\n");
    printf("                                         --Instruction--\n");
    printf("                [Random number is generated from 1 to 100. So you have to guess from 1 to 100]\n");

    srand(time(0));
    number = rand() %100 + 1; // Generate random number between 1 and 100.
    // printf("Random Number = %d\n", number);
    //Keep running while correct number is gussed.
    do{
        printf("Guess Number between 1 to 100\n");
        scanf("%d" , &guess);
        if(guess>number){
            printf("Please guess Smaller Number!\n");
        }

        else if (guess<number){
            printf("Please guess Greater Number !\n");
        }

        else{
            printf("YEAH !! YOU GUSSED IN %d ATTEMPT." , nguesses);
        }    
        nguesses++;
    }while(guess!=number);
    

    return 0;
}