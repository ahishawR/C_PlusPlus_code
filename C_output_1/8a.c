#include <stdio.h>
int main(void)
/*The printf function returns the number of characters successfully printed on the screen.
The string "GeeksQuiz" has 9 characters, so the first printf prints GeeksQuiz and returns 9.
*/
{
    int x = printf("GeeksQuiz");
    printf("%d", x);
    return 0;
}