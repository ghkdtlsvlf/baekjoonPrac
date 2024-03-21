#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int compare1 = 1, compare2 = 0;
    
    for (int i : num_list) compare1 *= i;
    for (int i : num_list) compare2 += i;

    compare1 > compare2* compare2 ? answer = 0: answer = 1;

    return answer;
}