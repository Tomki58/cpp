#include <iostream>

using namespace std;

int main() {

	double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;

	if (N > B) {
		N *= (1 - Y / 100);
	} else if (N > A) {
		N *= (1 - X / 100);
	}

	cout << N;

	return 0;
}
