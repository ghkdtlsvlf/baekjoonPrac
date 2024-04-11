#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    
    int tile = brown+yellow;
    
    for(int i =3; i< tile/2 ; i++){
        int row =0,col=0;
        if(tile%i ==0) {
            row = i;
            col = tile/i;
            
        }
        if(col*2 + row*2 - 4 == brown) {
            answer.push_back(col);
            answer.push_back(row);
            break;
        }
    }
    
    return answer;
}