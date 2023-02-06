// // Program 1 (Compiles and runs fine in C, but not in C++)

// #include <iostream>

// void fun() { }

// int main(void)
// {
// 	fun(10, "GfG", "GQ");

// 	return 0;
// }

// // This code is contributed by sarajadhav12052009
// #// Example of 'SIGABRT' error

#include <iostream>
using namespace std;

int main() {

	int arr[5] = {1, 2, 3, 4, 5};

	// SIGABRT error
	arr[6] = 6;

	return 0;
}

// This code is contributed by sarajadhav12052009

