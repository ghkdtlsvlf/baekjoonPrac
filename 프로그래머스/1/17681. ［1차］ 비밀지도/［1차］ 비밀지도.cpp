#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string temp;
    
    for(int i=0; i< arr1.size();i++){     
        
        int wall =  arr1[i] | arr2[i]; 
        int count = n;
        while(count >0){
            if(wall%2 ==0) temp+=' ';
            else temp +='#';
            wall/=2;
            count--;
        }
        reverse(temp.begin(),temp.end());
        answer.push_back(temp);
        temp.clear();
        
    }
    
    
    return answer;
}