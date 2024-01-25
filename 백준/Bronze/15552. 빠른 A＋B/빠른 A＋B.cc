#include <iostream>
#include <vector>

int main() {
    
    int T;
    int sum;
    std::cin >> T;

    std::vector<std::pair<int, int>> testCases;


    for (int i = 0; i < T; ++i) {
        int A, B;

        std::cin >> A >> B;
        testCases.push_back(std::make_pair(A, B));
    }
    int check{};
    // 각 테스트 케이스의 결과 출력
    for (int i = 0; i < T; ++i) {
 
        std::cout << testCases[i].first + testCases[i].second << '\n';

    }
   

    return 0;
}