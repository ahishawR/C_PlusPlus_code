#include<stdio.h>
/*125 is represented as 01111101 in binary and when we add 10 i.e 1010 in binary it becomes : 10000111. 
Now what does this number represent? Firstly, you should know that char can store numbers only -128 to 127 
since the most significant bit is kept for sign bit. Therefore 10000111 represents a negative number. 
To check which number it represents we find the 2’s complement of it and get 01111001 
which is = 121 in decimal system. Hence, the number 10000111 represents -121.
*/
int main()
{
    char c = 125;
    c = c+10;
    printf("%d", c);
    return 0;
}