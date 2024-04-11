#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    unsigned int f1 = 0, f2 = 1, f3=1;
    for(int i = 0; i<n-1; i++){
        
        f3 = (f1+f2) %1234567;
        f1 = f2%1234567;
        f2 = f3%1234567;
    }
    answer = f3 ;
    
    return answer;
}