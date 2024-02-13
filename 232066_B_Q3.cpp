#include <iostream>
using namespace std;

int main() {

	int x = 75, i = 0, k = 0;

	cout << "The numbers are: \n";
	while (true) {
		cout << x << "\n";
		if ((x % 2) == 0) {
			x = (x / 2);
		}
		else {
			x = (3 * x) + 1;
		}
		k++;
		i = x;
		if (i == 1) {
			cout << x << "\n";
			break;
		}
	}
	cout << "k = " << k;
	return 0;
}