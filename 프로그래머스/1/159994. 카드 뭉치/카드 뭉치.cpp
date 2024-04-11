#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    for(int i = 0; i<cards1.size()-1; i++){
        auto found = find(goal.begin(),goal.end(),cards1[i]);
        auto next_found = find(goal.begin(),goal.end(),cards1[i+1]);
        if(next_found < found) answer ="No";
    }
    
    for(int i = 0; i<cards2.size()-1; i++){
        auto found = find(goal.begin(),goal.end(),cards2[i]);
        auto next_found = find(goal.begin(),goal.end(),cards2[i+1]);
        if(next_found <  found) answer ="No";
    }
    
    
    
    return answer;
}