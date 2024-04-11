#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string,int> score;
    for(int i=0; i< name.size(); i++){
        score.emplace(name[i],yearning[i]);
    }
    
    for(int i=0 ; i<photo.size();i++){
        int sum = 0; 
        for(auto s : photo[i]){
             if(score.find(s) != score.end()) { 
                sum += score[s];
            }         
        }
        answer.push_back(sum);
    }
    
    
    return answer;
}