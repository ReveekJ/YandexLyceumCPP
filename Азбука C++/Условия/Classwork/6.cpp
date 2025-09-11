#include <iostream>

int main() {
    int n;
    std::cin >> n;

    std::string word;

    // Determine the correct form of "корова"
    if (n % 10 == 1 && n % 100 != 11) {
        word = "korova"; // 1 корова
    } else if (n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 >= 20)) {
        word = "korovy"; // 2-4 коровы
    } else {
        word = "korov"; // 0, 5-9, 11-14 коров
    }

    // Output the result
    std::cout << n << " " << word << std::endl;

    return 0;
}
