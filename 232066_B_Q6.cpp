#include <iostream>
using namespace std;

void odd(int num1, int num2);
void sumeven(int num1, int num2);
void squares(int num1, int num2);
void oddsquare(int num1, int num2);
void letters(int num1, int num2);

int main() {
	int num1, num2;
	cout << "enter 2 numbers: \n";
	cin >> num1 >> num2;
	if (num1 < num2) {
		int select;
		cout<<"1.Output all odd numbers between firstNum and secondNum.\n2.Output the sum of all even numbers between firstNum and secondNum.\n3.Output the numbers and their squares between 1 and 10.\n4.Output the sum of the square of the odd numbers between firstNum and secondNum.\n5.Output all uppercase letters between firstNum and secondNum.\n";
		cin >> select;
		system("CLS");
		if (select == 1) {
			odd(num1, num2);
		}
		else if (select == 2) {
			sumeven(num1, num2);
		}
		else if (select == 3) {
			squares(num1, num2);
		}
		else if (select == 4) {
			oddsquare(num1, num2);
		}
		else if (select == 5) {
			letters(num1, num2);
		}
		else {
			cout << "you pressed an invalid character.";
		}
	}
}

void odd(int num1, int num2) {
	int i = num1;
	while (i < num2) {
		if ((i % 2) != 0) {
			cout << i << endl;
		}
		i++;
	}
}
void sumeven(int num1, int num2) {
	int i = num1;
	int sum = 0;
	while (i < num2) {
		if ((i % 2) == 0) {
			sum += i;
		}
		i++;
	}
	cout << sum << endl;
}
void squares(int num1, int num2) {
	int i = 1;
	while (i <= 10) {
		cout << i << "\t" << i * i << endl;
		i++;
	}
}
void oddsquare(int num1, int num2) {
	int i = num1;
	int sum = 0;
	while (i < num2) {
		if ((i % 2) != 0) {
			sum += (i * i);
		}
		i++;
	}
	cout << sum;
}
void letters(int num1, int num2) {
	char letter = num1;
	if (letter < 65) {
		letter = 65;
	}
	while (letter < 91 && letter < num2) {
		cout << char(letter) << endl;
		letter++;
	}
}
