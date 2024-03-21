#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
#include<sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> numbers;
    stringstream ss(s);
    int num;
    
    while(ss>>num){
        numbers.push_back(num);
    }
    int min = *min_element(numbers.begin(),numbers.end());
    int max = *max_element(numbers.begin(),numbers.end());
    
    answer = to_string(min)+" "+ to_string(max);
    return answer;

}