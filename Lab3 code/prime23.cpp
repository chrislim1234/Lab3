/* Author: Chris Lim
 * Program: prim23.cpp
 * Description:finds if int is divisble by 2 and 3
 *    But not divisible by any other prime
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num;
	int placer;
	int threes=0;
	int twos=0; 

	cout << "Enter a positive integer:";
	cin >> num;
	placer = num;
	while (placer % 2 == 0 || placer % 3 == 0) {
		if (placer % 2 == 0) {
			placer = placer / 2;
			twos = twos + 1;
		}
		else if (placer % 3 == 0) {
			placer = placer / 3;
			threes = threes + 1;
		}
	}

	if (placer!=1) {
		cout << "No" << endl;
	}
	else if (placer==1) {
		cout << "Yes" << endl;
		cout << "Twos=" << twos;
		cout << "Threes=" << threes << endl;
		}
}