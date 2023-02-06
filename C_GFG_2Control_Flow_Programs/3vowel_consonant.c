#include <stdio.h>
int main()
{
    /*C Program to Check Vowel or Consonant
     */
    int ch;
    printf("Enter a character ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is a vowal ");
        break;
        default : 
        printf("%c is a concole ",ch);

    }
    return 0;
}