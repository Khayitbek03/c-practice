#include<iostream>
using namespace std;
int main() {
	//task1
	int a, b=0;
	cout << "Enter a number:";
	cin >> a;
	while (a >= 1) {
		b = b * 10 + a % 10;
		a = a / 10;
	}
	cout <<"The inverse of the number is:"<< b << endl;
	//task2
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	//task3
	cout << endl;
	for (int s = 1; s <= 5; s++) {
		for (int k = 5 - s; k > 0; k--)
			cout << " ";
		for (int l = 1; l <= s; l++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl << endl;
	//task4
	for (int p = 1; p <= 3; p++) {
		for (int d = p; d < 3; d++)
			cout << " ";
		for (int z = 1; z <= (2 * p - 1); z++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl << endl;
	//task5
	for (int r = 1; r <= 5; r++) {
		for (int e = 1; e <= r; e++) {
			cout << "*";
		}
		cout << endl;
	}
		for (int m = 5; m >= 1; m--) {
			for (int n = m; n > 0; n--) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;
		//task6
		int v;
		float y, fact, sum = 0, ser;
		for (y = 1; y <= 7; y++)
		{
			fact = y;//factorial of the series
			for (v = 1; v < y; v++)
				fact = fact * v;

			ser = y/ fact;//terms of the series
			sum = sum + ser;//sum of the terms of the series
		}
		cout << "The sum of the first 7 series is:" << sum;
		system("pause");
		return 0;
	}
