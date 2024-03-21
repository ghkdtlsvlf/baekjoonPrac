#include <string>
#include <vector>
#include<cmath>
using namespace std;
long long solution(long long n) {
	long long answer = 0;
	int check = 0;
	check = sqrt(n);

	if (check == sqrt(n)) answer = pow(check + 1, 2);
	else answer = -1;
	return answer;
}