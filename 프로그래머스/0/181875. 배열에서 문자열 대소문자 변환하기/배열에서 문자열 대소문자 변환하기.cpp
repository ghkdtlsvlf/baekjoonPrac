#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string temp{};
    for (int i = 0; i < strArr.size(); i++) {
        if (i % 2 == 0) {
            for(auto ch: strArr[i]) temp +=tolower(ch);
            
        }
        else {
            for (auto ch : strArr[i]) temp+=toupper(ch);
        }
        answer.push_back(temp);
        temp = "";
    }


    return answer;
}
