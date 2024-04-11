#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(),numbers.end());
    
    int first_two = numbers[0]*numbers[1];
    int last_two = numbers[numbers.size()-1]* numbers[numbers.size()-2];
    
    
    first_two>last_two? answer = first_two: answer = last_two; 
    
    
    return answer;
}