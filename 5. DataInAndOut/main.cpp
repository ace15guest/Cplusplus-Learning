#include <iostream>
#include <string>

int main(){
    //Printing data
    
    // std::cout << "Hello C++20" << std::endl;
    // int age{21};
    // std::cout << "Age: " << age << std::endl;
    // std::cerr << "Error message : Something is wrong" << std::endl;
    // std::clog << "Log message : Something happened" << std::endl;

    int age1;
    std::string full_name;

    std::string name;

    // std::cout << "Please type your name and age : " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;
    // std::cin >> name >> age1;

    // std::cout << "hello " << name << " you are " << age1 << std::endl;

    // Data with spaces

    std::cout << "Type your full name " << std::endl; 
    std::getline(std::cin,full_name);
    std::cout << "Hello " << full_name << std::endl;

    return 0;
}