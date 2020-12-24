#include <iostream>

using namespace std;

int main() {

	int A, B;
	cin >> A >> B;
	int i = A % 2 == 0 ? A : A + 1;

	for (; i <= B; i += 2) {
		cout << i << ' ';
	}

	return 0;
}
