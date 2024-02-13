#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int lockers;
	cout << "enter number of lockers: ";
	cin >> lockers;
	lockers = sqrt(lockers);
	cout << "Number of lockers that are open: " << lockers;
}