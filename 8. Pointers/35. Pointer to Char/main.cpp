#include <iostream>

using namespace std;

int main(){
    char *p_char_var {nullptr};
    char char_var {'A'};
    p_char_var = &char_var;

    cout << "The value in p_char_var is: " << *p_char_var << endl;
    
    char char_var2 {'c'};
    p_char_var = &char_var2;
    cout << "The value in p_char_var is: " << *p_char_var << endl;

    // Initialize with string literal

    const char *p_message {"Hello World!"};
    cout << "*p_message (dereferenced) points to the first character when referecing the pointer: " << *p_message << endl;
    cout << "p_message shows the whole message: " << p_message << endl;
    cout << "&p_message shows the memory location: " << &p_message << endl;

    char message[] {"Hello World"};
    message[0]= 'B';
    cout << "message: " << message << endl;



    return 0;
}