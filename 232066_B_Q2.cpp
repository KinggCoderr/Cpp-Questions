#include <iostream>
using namespace std;

int main() {

	float Amount_Borrowed;
	cout << "Enter Amount Borrowed: ";
	cin >> Amount_Borrowed;

	float rate;
	cout << "Enter Interest Rate: ";
	cin >> rate;
	rate = (rate / 12)/100;

	float Monthly_Payment;
	cout << "Enter Monthly Payments: ";
	cin >> Monthly_Payment;

	int months = 0;

	while (true) {
		float interest = Amount_Borrowed * rate;
		interest *= 100;
		interest = round(interest);
		interest /= 100;
		Amount_Borrowed = Amount_Borrowed - Monthly_Payment + interest;
		months++;

		if (Amount_Borrowed < 0) {
			cout << "number of months to repay the loan: " << months;
			break;
		}

	}

	return 0;
}