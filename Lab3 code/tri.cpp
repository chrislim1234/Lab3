/* Author: Chris Lim
 * Program: tri.cpp
 * Description:create triangle with specified angle
 *    But 20<x<30 becomes 20
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num;

	cout << "Enter a positive integer between 15 and 75:";
	cin >> num;
	for (int i = 1; i < 33; i++) {
		int a = (i * tan(num*3.14/180));
		if (a < 20 || a>30) {
			for (int x = 0; x < a; x++) {
				cout << "*";
			}
		}
		else if (a <= 30 && a >= 20) {
			for (int x = 0; x < 20; x++) {
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}