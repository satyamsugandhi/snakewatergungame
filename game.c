#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you,char comp){
   // returns 1 if you win , -1 if you loose and 0 if draw

   // conditions for draw
   // cases covered : ss ,gg ,ww,

   if (you == comp)
   {
      return 0;
   }
   
   // non draw cases :-
   // cases covered : sg, gs, sw, ws, gw, wg.
   if (you=='s'&& comp=='g')
   {
      return -1;
   }
   else if (you=='g'&&comp=='s'){
       return 1;
   }
   if (you=='s'&& comp=='w')
   {
      return 1;
   }
   else if (you=='w'&&comp=='s'){
       return -1;
   }
   if (you=='g'&& comp=='w')
   {
      return -1;
   }
   else if (you=='w'&&comp=='g'){
       return 1;
   }

}
int main(){
    char you , comp;
    srand(time(0));

    int number = rand()%100 +1;

    if (number<33)
    {
       comp= 's';
    }
    else if(number>33&& number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("enter 's' for snake , 'w' for water , 'g' for gun\n");
    scanf("%c",&you);

    int result = snakewatergun(you,comp);
    printf("you choose %c and computer choose %c\n",you,comp);
    if(result == 0){
        printf("game draw! \n");
    }
    else if(result == 1){
        printf("you win! \n");
    }
    else{
        printf("you lose! \n");
    }
    return 0;
}