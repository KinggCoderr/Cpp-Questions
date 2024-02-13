#include <iostream>
#include <cmath>
using namespace std;

int digits(int num) {
	int digits = 0;
	while (true) {
		num = num / 10;
		digits++;
		if (num < 1)
			break;
	}
	return digits;
}

int main() {
	int number;
	int t = 0;
	cout << "Enter a number: ";
	cin >> number;
	int s = digits(number);
	for (int i = 0; i < s; i++) {
		int x = number % 10;
		number /= 10;
		t += x;
		x = number % 10;
		number /= 10;
		t -= x;
	}
	if (t % 11 == 0)
		cout << "Number is divisible by 11.";
	else
		cout << "Number is not divisible by 11.";
	return 0;
}