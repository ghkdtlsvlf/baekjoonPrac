#include <iostream>
#include <string>

using namespace std;


int main() {
	
	int a, b{};

	cin >> a;
	cin >> b;
	
	cout << a * (b % 10) <<'\n';
	cout << a * ((b%100) - (b % 10))/10 << '\n';
	cout << a * (b - (b % 100)) / 100 << '\n';
	cout << a * b << '\n';
	
	return 0 ;

}