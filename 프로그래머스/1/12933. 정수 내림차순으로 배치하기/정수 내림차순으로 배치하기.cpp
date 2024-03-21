#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b) {
    return a > b; // 내림차순으로 정렬하려면 '>' 연산자를 사용합니다.
}

long long solution(long long n) {
    long long answer = 0;
    string temp{};
    
    while (n > 0) {
        
        temp += to_string(n%10);
        n /= 10;
        
    }
    sort(temp.begin(), temp.end(), compare);
    
    answer = stoll(temp);
    

    return answer;
}