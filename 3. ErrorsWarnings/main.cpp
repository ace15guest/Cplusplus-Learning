#include <iostream>

int main(){
    // This program will not compile (Compile Time Error)
    std::cout << "This results in an Error" << std::endl ;
    // Run Time Error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;
    return 0;
}