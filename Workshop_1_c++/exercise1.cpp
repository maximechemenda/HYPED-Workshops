#include <iostream>

int main() {
    int grade;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    if (90 <= grade && grade <= 100) {
        std::cout << "You scored an A\n";
    } else if (80 <= grade && grade < 90) {
        std::cout << "You scrored a B\n";
    } else if (70 <= grade && grade < 80) {
        std::cout << "You scored a C\n";
    } else if (60 <= grade && grade < 70) {
        std::cout << "You scored a D\n";
    } else {
        std::cout << "You scored a F\n";
    }
   
}