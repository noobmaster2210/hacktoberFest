#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess ,ngueses=1;
    srand(time(0));
    number=rand()%100 + 1;
printf("the number is %\n", number);

do{
    printf("guess the number between 1 t 100\n");
    scanf("%d",&guess);
    if(guess<numer){
    printf("lower number please\n")
    }
    else if(guess>numer)
    printf("higher number please\n")
    }
    else{
        printf("you guesse it in %d attempts\n", nguesses);
    }
    nguesses++;
    }while(guess!=number);
    return0;
 }   
