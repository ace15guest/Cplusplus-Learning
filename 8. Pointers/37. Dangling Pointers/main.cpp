#include <iostream>

using namespace std;

int main(){
    // A dangling pointer is a pointer that is pointing to an invalid address that results in undefined behavior

    //Unitialized pointer
    int * p_number;

    cout << "Case 1, Unitialized pointer\n p_number: "<< *p_number<<endl;

    //Deleted Pointer
    int *p_number1 {new int{67}};
    cout << "Case 2 deleted pointer: \n";
    cout << "p_number1 before delete: " << *p_number1 << endl;
    delete p_number1;
    cout << "p_number1 after delete: " << *p_number1 << endl; // junk value


    // Multiple Pointers pointing to the same memory

    cout << "Case 3, Multiple pointers pointing to the same address\n";
    int *p_number3 {new int{83}};
    int *p_number4 {p_number3};

    cout << "p_number3 - " << p_number3 << " - " << *p_number3 << endl;
    cout << "p_number4 - " << p_number4 << " - " << *p_number4 << endl;

    delete p_number3;
    // Undefined behavior because p_#3 deleedmemory
    cout << "p_number4 after deleting p3- " << p_number4 << " - " << *p_number4 << endl;

}