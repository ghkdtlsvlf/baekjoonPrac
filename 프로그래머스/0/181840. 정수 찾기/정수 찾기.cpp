#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    for (auto i : num_list) {
    if (i == n)answer = 1;
}
    return answer;
}