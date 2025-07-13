#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int guess,random;
    int no_of_guess =0;
    srand(time(NULL));
    random = rand() % 100 +1; 

    printf("%d\n",random);
    
    printf("Welecome to the world of Gessing Number\n");

    do{
        printf("Please enter your Guess Between(1 to 100): ");

        scanf("%d",&guess);
        no_of_guess++;

        if(guess < random){
            printf("Guess a larger Number.\n");
        }else if(guess > random){
            printf("Guess a smaller Number.\n");
        }else{
            printf("Congratulations: You have successfully guessed the number in %d attempts",no_of_guess);
        }
    } while (guess != random);

    printf("\n");
    printf("\n Developed by:Jainil Patel");

    return 0;
}