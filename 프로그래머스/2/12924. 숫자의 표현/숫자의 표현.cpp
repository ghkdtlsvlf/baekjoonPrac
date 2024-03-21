#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp= n;
    for(int i=1; i< n/2 +1; i++){
        int k = i;
        temp = n;
        while(temp >= 0){
            if(temp==0) answer++;
            temp -=k;
            k++;
        }
    }
    answer ++;
    return answer;
}