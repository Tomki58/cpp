#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;

	int index = -2;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'f' && index < 0) {
			if (index == -2) {
				index = -1;
			} else {
				index = i;
			}
		}
	}
	cout << index;

	return 0;
}
