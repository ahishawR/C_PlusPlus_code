// // Program 1 (Compiles and runs fine in C, but not in C++)

// #include <iostream>

// void fun() { }

// int main(void)
// {
// 	fun(10, "GfG", "GQ");

// 	return 0;
// }

// // This code is contributed by sarajadhav12052009
#include<stdio.h>
void main()
{
static int i=5;
if(--i){
            main();
            printf("%d ", i); }
			//return 0;
}

