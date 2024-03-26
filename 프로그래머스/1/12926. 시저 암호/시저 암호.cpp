#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(auto &ch : s){
        
        if('a'<=ch && ch<='z' ){
            ch = 'a' + (ch - 'a'+ n)%26 ;
            if(ch > 122) ch-= 26;
            
        }        
        else if('A'<=ch && ch<='Z')  {
            ch += n;            
            if (ch > 90)   ch -= 26;
        
        }    
        
    }
    
    answer = s;
    
    return answer;
}