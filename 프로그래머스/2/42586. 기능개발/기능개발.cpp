#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> order;
    int count=0;
    
    while(!progresses.empty()){
        
        for(int i=0; i< progresses.size();i++){
            progresses[i] += speeds[i];
           
        }
        while (!progresses.empty() && progresses.front() >= 100) {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            count++;
        }

        // 완료된 작업 수가 있을 경우 answer에 추가
        if (count > 0) {
            answer.push_back(count);
            count = 0;
        }
        
    }
    
    return answer;
}