#include <iostream>

using namespace std;

int main(){
    // 
    int *p_number {new int{67}}; // Points to address 1
    // Should delete and reset here
    int number{55}; // lives at address 2

    p_number = &number; // p_number now points to address 2 but address 1 is still in use by the program 
                        // The memory is leaked

    // Double allocation memory leak
    int *p_number1 {new int{55}};
    // Use the pointer

    // Done Using so delete and reset but we will not for the sake of the example 
    p_number1 = new int{44}; // memory leaked with int{55}



    // p_number2 lives in the stack but the memory is still taken by 57 so once we exit the } brace we lose access to that memory
    {
        int *p_number2 {new int{57}};
    }

    return 0;
}