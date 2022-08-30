#include <iostream>

using namespace std;

int main(){
    //Initialize nullptr
    int *p_number {}; // Can only store address of a variable of type int
    double *p_fractional_number {};// Can only store address of a variable of type double
    // Explicitly initialize nullptr (Not pointing anywhere)
    int *p_number1{nullptr};
    int *p_fractional_number1 {nullptr};

    //All pointers will be the same size
    cout << "Null Pointer: " << p_number << endl;
    cout << "Size of int:" << sizeof(p_fractional_number1) << "\n" << "Size of double: " << sizeof(p_fractional_number) <<endl;

    int int_var {43};
    int *p_int{&int_var};
    cout << "int_var value -- memory location: " << int_var << " -- " << p_int << endl;

    //Dereferencing Pointers (Reading something at a memory location)
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;
    cout << "Value at memory location: " << *p_int2 << endl;
}