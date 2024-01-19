#include <iostream>


using namespace std;


int main() {
	
	int n{};

	cin >> n;

	long long result{};
	for (int i = 0; i <= n; i++) {
		result += i;
	}
	cout << result;
	return 0 ;

}