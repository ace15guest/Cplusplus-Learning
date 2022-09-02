#include <iostream>

using namespace std;

int main(){
    int int_value {45};
    double double_value{33.65};
    int &reference_to_int_value_1{int_value}; //Assigning through initialization
    int &reference_to_int_value_2 = int_value; // Assigning through assignment
    double &reference_to_double_value_1 {double_value};


    cout << "Int Value: " << int_value << " -- "<< &int_value << endl;
    cout << "Reference to Int Value 1: " << reference_to_int_value_1 << " -- " << &reference_to_int_value_1 << endl;
    cout << "Reference to Int Value 2: " << reference_to_int_value_2 << " -- " << &reference_to_int_value_2 << endl;

    cout << "Modifying int_value..." << endl;
    int_value = 89;
    cout << "Int Value: " << int_value << " -- "<< &int_value << endl;
    cout << "Reference to Int Value 1: " << reference_to_int_value_1 << " -- " << &reference_to_int_value_1 << endl;
    cout << "Reference to Int Value 2: " << reference_to_int_value_2 << " -- " << &reference_to_int_value_2 << endl;

}