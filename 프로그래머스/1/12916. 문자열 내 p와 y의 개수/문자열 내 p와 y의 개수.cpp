#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0, y_count=0;
   
    for (char ch : s) {
        if (ch == 'p' || ch == 'P') p_count++;
        if (ch == 'y' || ch == 'Y') y_count++;
    }

    if (p_count == y_count) answer = true;
    else answer = false;

    return answer;
}
