//Number Guess Game using random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));


int guess = 0;
int tries = 0;
int min = 0;
int max = 100;
int answer = (rand()% (max-min+1))+min;

//printf("%d\n",answer);

    do
    {
        printf("Guess a number between %d - %d :\n",min,max);
        scanf("%d",&guess);
        tries++ ;

        if (guess > answer)
        {
           printf("Too High\n");
        }else if(guess < answer){
            printf("Too Low\n");
        }else{
            printf("Correct\n");
        }


        


        /* code */
    } while (guess !=answer);
    
    printf("Nuber is %d\n",answer);
    printf("You got %d tries to answer\n",tries);





    return 0;
}