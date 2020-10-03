#include <iostream>
#include <vector>

//std::vector<int> swap(int &a, int &b) {
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    //std::vector<int> result;
    //result.push_back(a);
    //result.push_back(b);

    //return(result);
}

int main() {

    int *ptr;
    int val = 3;
    ptr = &val;

    std::cout << val << "\n"; //3
    std::cout << *ptr << "\n"; //3
    std::cout << ptr << "\n"; //0x7ffee9255534

    int a = 1;
    int b = 2;

    //std::vector<int> result = swap(a,b);
    swap(a,b);

    std::cout << a << "\n"; //2
    std::cout << b << "\n"; //1

}