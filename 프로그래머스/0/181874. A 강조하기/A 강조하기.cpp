#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto ch: myString){
        if(ch == 'a' || ch == 'A') {
        answer+= toupper(ch);   
        }
        else{
          answer+= tolower(ch);  
        } 
        
    }
       
    return answer;
}