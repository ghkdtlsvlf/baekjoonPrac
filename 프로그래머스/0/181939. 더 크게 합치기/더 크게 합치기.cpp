#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string com1 = to_string(a) + to_string(b);
    string com2 = to_string(b) + to_string(a);
    if (stoi(com1) > stoi(com2))answer = stoi(com1);
    else answer = stoi(com2);


    return answer;
}