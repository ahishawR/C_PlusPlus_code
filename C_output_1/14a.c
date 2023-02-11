#include <stdio.h>
/*'a' + 2 will be 'c', so Ournode p = {'1', '0', 'c'}
and output will be 0, c. See: storage for Strings in C, string.*/
struct Ournode
{
    char x, y, z;
};

int main()
{
    struct Ournode p = {'1', '0', 'a' + 2};
    struct Ournode *q = &p;
    printf("%c, %c", *((char *)q + 1), *((char *)q + 2));
    return 0;
}