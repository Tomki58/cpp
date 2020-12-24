#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0 && b != 0) {
		cout << -c / b;
		return 0;
	}

	double D = pow(b, 2) - 4 * a * c;
	double x1, x2;
	if (D == 0 && b != 0) {
		x1 = (-b) / (2 * a);
		cout << x1;
	}
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << x1 << " " << x2;
	}

	return 0;
}
