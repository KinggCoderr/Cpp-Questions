#include <iostream>
using namespace std;

int main() {
	float townA, townB, rateA, rateB, year = 0;

	cout << "Enter Populations of town A: ";
	cin >> townA;
	cout << "Enter Growth rate of town A: ";
	cin >> rateA;
	rateA /= 100;

	cout << "Enter Populations of town B: ";
	cin >> townB;
	cout << "Enter Growth rate of town B: ";
	cin >> rateB;
	rateB /= 100;

	while (true) {
		year++;
		townA = townA + (townA * rateA);
		townB = townB + (townB * rateB);

		if (townA >= townB) {
			cout << "\nPopulation of town A: " << static_cast<int>(townA) << "\nPopulation of town B: " << static_cast<int>(townB) << endl;
			cout <<"Years: " << year;
			break;
		}
	}

	return 0;
}