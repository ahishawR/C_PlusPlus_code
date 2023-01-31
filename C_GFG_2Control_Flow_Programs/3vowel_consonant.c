#include <stdio.h>
int main()
{
    /*C Program to Check Vowel or Consonant
     */
    int ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        printf("%c is a vowal ", ch);
    else
        printf("%c is a consonant ", ch);
}