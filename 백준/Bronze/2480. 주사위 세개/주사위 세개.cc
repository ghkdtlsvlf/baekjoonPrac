#include <iostream>


using namespace std;


int main() {
	
	int a, b, c{};

	cin >> a >> b >> c;

	if (a == b && b == c) {
		a = 10000 + a * 1000;
		cout << a;
	}
	else if (a == b || a == c) {
		a = 1000 + a * 100;
		cout << a;
	}
	else if (b == c) {
		b = 1000 + b * 100;
		cout << b;
	}
	else {
		if (a > b) {
			if (a > c) {
				a =  a * 100;
				cout << a;
			}
			else {
				c = c * 100;
				cout << c;
			}
		}
		else {
			if (b > c) {
				b = b * 100;
				cout << b;
			}
			else {
				c = c * 100;
				cout << c;
			}
		}

	}

	
	return 0 ;

}