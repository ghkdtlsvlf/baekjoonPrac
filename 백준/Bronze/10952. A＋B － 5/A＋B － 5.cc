#include <iostream>
#include <vector>

int main() {
    


    std::vector<std::pair<int, int>> testCases;
    int A{}, B{};
    int T{};
    while (true) {
        
        std::cin >> A >> B;
        if (A == 0 && B == 0) {
            // 각 테스트 케이스의 결과 출력
            for (int i = 0; i < T; ++i) {

                std::cout << testCases[i].first + testCases[i].second << '\n';

            }
            break;
        }
        else {
            
        testCases.push_back(std::make_pair(A, B));
        T++;
        }
        
    }


   

    return 0;
}