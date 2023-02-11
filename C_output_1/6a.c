#include <stdio.h>
/*The crux of the program lies in the expression: "GeeksQuiz"[5]. 
This expression is broken down by the compiler as: *(“GeeksQuiz” + 5). 
Adding 5 to the base address of the string increments the pointer(
lets say a pointer was pointing to the start(G) of the string initially) 
to point to Q. Applying value-of operator gives the character at 
the location pointed to by the pointer i.e. Q.*/
int main()
{
    printf("%c ", "GeeksQuiz"[5]);
    return 0;
}