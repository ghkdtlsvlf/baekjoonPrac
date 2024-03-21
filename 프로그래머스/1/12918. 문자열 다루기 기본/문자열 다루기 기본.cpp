#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for(char ch: s){
        if(s.size() ==4 || s.size()==6){
        if('0'<= ch && ch <='9') continue;
        
        else return false;
        }else return false;
    }
    
    return answer;
}