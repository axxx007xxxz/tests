// Include basic libraries
#include <iostream>

// Tell the environment to use standard namespace, this avoid having to write "std::" before every expression
using namespace std;

int sum(int c, int d) {
	return (c + d);
}

int main() {
	// Define two numbers
	int a = 1, b = 2;
	// Sum the numbers using the relative function
	int result = sum(a, b);

	// Print the result
	cout << "Result: " << result << ".\n";
}