#include <iostream>

int main() {
    int A, B;

    while (std::cin >> A >> B) {
        // 입력이 계속되는 동안 A와 B를 더한 값을 출력
        std::cout << A + B << std::endl;
    }

    return 0;
}