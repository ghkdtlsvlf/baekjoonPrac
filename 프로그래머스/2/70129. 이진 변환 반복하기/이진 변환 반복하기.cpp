#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int z_count =0;
    int t_count =0;
    
    
    while(s != "1"){
        string str;
        for(char ch: s){
            if(ch == '1')str +=ch;
            else z_count++;
        }
        s.clear();
        int size = str.size();
       
        while(size !=0){
            if(size%2==0) s.insert(s.begin(),'0') ;
            else s.insert(s.begin(),'1');
            size /=2;
        }
        t_count++;
    }
     answer.push_back(t_count);
    answer.push_back(z_count);
   
    
    
    return answer;
}