#include <iostream>
using namespace std;

int main() {
	int units = 50;
	float rent, increase, maintain, profit, maxprofit, units_rented, increased_rent;

	cout << "Rent to occupy the units: ";
	cin >> rent;
	cout << "Increase in Rent: ";
	cin >> increase;
	cout << "Amount to maintain a rented unit: ";
	cin >> maintain;

	maxprofit = (units * rent) - (units * maintain);
	profit = ((units - 1) * (rent + increase)) - ((units - 1) * maintain);

	while (units > 0) {
		rent += increase;
		units--;
		profit = ((units - 1) * (rent + increase)) - ((units - 1) * maintain);
		if (maxprofit < profit) {
			maxprofit = profit;
			units_rented = units;
		}
	}
	cout << "\nNumber of units to be rented to maximize profits: " << units_rented << endl;
	
	return 0;

}
