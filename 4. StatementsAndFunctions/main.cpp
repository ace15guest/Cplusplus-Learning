#include <iostream>

int add(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

float multiply(float num1, float num2){
    return num1*num2;
}

int main(){
    int first_number {3}; // Statement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl; // 3
    std::cout << "Second number: " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl; // 10
    int sum2 = add(first_number, second_number); 
    std::cout << "Sum: " << sum2 << std::endl; // 10


    std::cout << add(5,7) << 
    std::endl; // 12 Semicolon ends a line not line breaks

    std::cout << multiply(5.7,6.89) << std::endl;

    return 0;
}