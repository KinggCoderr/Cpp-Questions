#include <iostream>
using namespace std;

int main() {

	cout << "Enter the Number: ";
	int n;
	cin >> n;
    int s = n;

    for (int i = 4; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = i; k <= (n + 3); k++) {
            if (i == 4)
                cout << "*";
            else {
                if (i == k || k == n + 3)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        n++;
        cout << endl;
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        for (int k = i; k <= (s + 3); k++) {
            cout << "*";
        }
        s--;
        cout << endl;
    }

    return 0;
}