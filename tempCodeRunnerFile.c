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
printf("[Q] Quezon\n");
printf("[K] Kamuning\n");
printf("[A] Araneta Center Cubao\n");
printf("[G] Gilmore\n");
printf("[L] Legarda\n");
printf("[S] Santolan\n");

scanf("%c",&destination);
    int fare;

    switch(destination){
        case 'q':
        case 'Q':
            printf("Quezon city\n\n");
            fare = 11;

        break;
        case 'k':
        case 'K':
            printf("Kamuning\n\n");
            fare = 13;
        break;

        case 'a':
        case 'A':
            printf("Araneta Center Cubao\n\n");
            fare = 14;
        break;

        case 'G':
        case 'g':

            printf("Gilmore\n\n");
            fare = 16;
        break;

        case 'L':
        case 'l':

            printf("Legarda\n\n");
            fare = 20;
        break;

        case 's':
        case 'S':
            printf("Santolan\n\n");
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


