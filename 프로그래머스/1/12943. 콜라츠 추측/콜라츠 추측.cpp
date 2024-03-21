#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long temp = num;
    int answer = 0;
    int count =0;
    
    if (temp ==1) return answer;
    
    while(temp != 1){
        if(temp%2==0){
            temp /=2;
            count++;
        }else{
            temp = temp*3+1;
            count++;
        }
       if(count==500){
           answer = -1;
           return answer;
        
       }
    }
    
    answer = count;
    
    return answer;
}