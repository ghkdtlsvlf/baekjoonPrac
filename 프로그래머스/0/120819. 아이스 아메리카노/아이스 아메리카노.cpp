#include <string>
#include <vector>

using namespace std;


vector<int> solution(int money) {
    vector<int> answer;
    int price = 5500;

    answer.push_back(money / price);
    answer.push_back( money - price * answer[0]);

    return answer;
}