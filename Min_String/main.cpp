#include <string>
#include <iostream>

using namespace std;

int main() {
	string first_string, second_string, third_string;
	cin >> first_string >> second_string >> third_string;
	string min_string = first_string;
	if (second_string < min_string) {
		min_string = second_string;
	}
	if (third_string < min_string) {
		min_string = third_string;
	}
	cout << min_string << endl;
}
