#include <string>
#include <vector>
#include <cmath>
#include<algorithm>
#include<iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count=0;
    vector<int> arr;
     string str{};
    while(n != 0){ 
    
        if (n % 3 == 0 ){
            arr.push_back(0);
        }
        else if (n%3==1) {
            arr.push_back(1);
        }       
        else if (n%3 ==2)
        {
            arr.push_back(2);
        }
      n /=3;
    }
    reverse(arr.begin(),arr.end());
    for(int i =0; i< arr.size();i++){
        answer += arr[i]*pow(3,i);
    }
    
    
     return answer;
}
               
