#include <iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	if (b == 0) {
		cout << "Impossible\n";
	} else {
		cout << a / b;
	}

	return 0;
}