using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    
    long long temp = money;
    for(int i=1 ;i<= count; i++){
        temp -= i*price;
    }
    if(temp<0){
        answer = -1*temp;
    }else answer =0;
    

    return answer;
}