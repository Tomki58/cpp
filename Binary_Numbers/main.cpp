#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int number;
	vector<int> repr;
	cin >> number;

	int max_pow = 0;
	while (pow(2, max_pow) <= number) {
		max_pow++;
	}

	for (int cur_pow = max_pow - 1; cur_pow >= 0; cur_pow--) {
		int div_result = number / pow(2, cur_pow);
		number %= (int)pow(2, cur_pow);
		repr.push_back(div_result);
	}

	for (int x : repr) {
		cout << x;
	}

	return 0;
}
