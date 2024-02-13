#include <iostream>
using namespace std;

int main() {
	int rabbit = 1, months, i = 2;
	cout << "Months: ";
	cin >> months;
	while (i <= months) {
		rabbit *= 2;
		i += 2;
	}
	cout << "Number of Rabbits after " << months << " is " << rabbit;
}