#include <stdio.h>
#include <conio.h>
#include <windows.h>

char destination=' ';
int cash=' ';
int passenger=' ';
int multiply;
char again;
int change;
main(){
do{

printf("enter destination : \n");
printf("[P] Puri\n");
printf("[B] Bhubanaswer\n");
printf("[C] Cuttack\n");
printf("[R] Roulkla\n");
printf("[L] Station\n");
printf("[O] Old Town\n");

scanf("%c",&destination);
    int fare;

    switch(destination){
        case 'p':
        case 'P':
            printf("Puri\n\n");
            fare = 50;

        break;
        case 'b':
        case 'B':
            printf("Bhubanaswer\n\n");
            fare = 15;
        break;

        case 'c':
        case 'C':
            printf("Cuttack\n\n");
            fare = 20;
        break;

        case 'R':
        case 'r':

            printf("Roulkla\n\n");
            fare = 70;
        break;

        case 's':
        case 'S':

            printf("Station\n\n");
            fare = 40;
        break;

        case 'o':
        case 'O':
            printf("Old town\n\n");
            fare = 25;
        break;

    }



printf("Enter number of passenger\n");
scanf("%d",&passenger);

multiply = passenger*fare;

printf("\nTotal price: %d",multiply);

printf("\nEnter cash: ");
scanf("%d",&cash);
change=cash-multiply;

if(change<0){

printf ("\nchange: %d",change);
printf ("\nNot enough cash ");
}

else {
    printf ("\nchange: %d",change);
    printf ("\nSuccess");

}
printf("\n\n\nTry again? [y/n]: \n\n\n");
printf("---------------------------------------");
scanf("%s",&again);

}
while(again== 'Y' || again == 'y'|| change<0);
getch();
}


