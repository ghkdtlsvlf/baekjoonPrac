#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void change (vector<int> &a){
    if( a[1]>a[0]){
        swap(a[0],a[1]);      
    }
        
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width =0, height =0;
    
    
    
    for( auto &vec : sizes){
        change(vec);
        width =max(width,vec[0]);
        height = max(height,vec[1]);
           
        }
    answer = width * height;
    
    
    
    return answer;
}