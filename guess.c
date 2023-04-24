#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
int num,guess,attm;
srand(time(0));
num=rand()%100+1;

do{printf("guess the number b/w 1 to 100\n");
scanf("%d",&guess); if(guess>num){printf("lower number please\n");}
else if(guess<num){printf("Higher number please\n");}
else{printf("you guessed it in %d attempts\n",attm);
}
attm++;
}
while(guess!=num);}





