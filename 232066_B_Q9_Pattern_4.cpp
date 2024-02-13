#include <iostream>
using namespace std;

int main() {

	int height;
	cout << "Enter height: ";
	cin >> height;
	int number;
	cout << "Enter number: ";
	cin >> number;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < number; j++) {
			for (int k = 1; k < height - i; k++) {
				cout << " ";
			}
			for (int l = 0; l < (1 + (2 * i)); l++) {
				if (l == 0 || l == i * 2)
					cout << "*";
				else if (i == height - 1)
					cout << "*";
				else
					cout << " ";
			}
			for (int k = 1; k < height - i; k++) {
				cout << " ";
			}
		}
		cout << endl;
	}
}