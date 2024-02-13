#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const float pi = 3.14;
	float radius, sector;

	cout << "Radius: ";
	cin >> radius;

	sector = 2 * pi * radius * (1 - sqrt(2.00 / 3.00));

	sector *= 100;
	sector = round(sector);
	sector /= 100;

	cout << "Length of Sector for maximum Volume: " << sector;

	return 0;
}