#include <iostream>

int main() {
    double celsius; 

    std::cin >> celsius; 

    int farenheit = celsius * 9/5 + 32;
    int kelvin = celsius + 273.15;

    std::cout << round(farenheit) << "," << round(kelvin);

}