#include <iostream>
#include <string>

using namespace std;

int Factorial(int n) {
	if (n == 0 || n == 1 || n < 0) {
		return 1;
	} else {
		return n * Factorial(n - 1);
	}
}

bool isPalindrom(string word) {

}

int main() {

	int number;
	cin >> number;
	cout << Factorial(number);

	return 0;
}
