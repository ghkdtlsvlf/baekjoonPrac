#include <iostream>


using namespace std;
//첫째 줄에 윤년이면 1, 아니면 0을 출력한다.

int main() {
	
	int a{};

	cin >> a;

	if ( ((a % 4 == 0) && (a%100 !=0)) || (a%400==0) ) {
			cout << '1';

	}
	else {
		cout << '0';
	}

	return 0 ;

}