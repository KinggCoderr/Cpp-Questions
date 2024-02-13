#include <iostream>
using namespace std;

int main() {

	int n = 9;
	int s = n + 2;
	int d = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < s; j++) {
			if (j > d && j < n + 1) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		d++;
		n--;
		cout << endl;
	}

	d--;
	n++;

	for (int i = 0; i < 5; i++) {
		d--;
		n++;
		for (int j = 0; j < s; j++) {
			if (j > d && j < n + 1) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}

}