#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (auto vec : numbers) {
        answer.push_back(vec * 2);
    }

    return answer;
}