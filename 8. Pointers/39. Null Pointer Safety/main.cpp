#include <iostream>

using namespace std;

int main(){
    // Verbose nullptr check
    int *p_number{};
    if(!(p_number==nullptr)){
        cout << "Valid Memory address" << p_number << endl;
    }
    else{
        cout << "p_number points to Invalid Memory address: " << p_number << endl;
    }
    // Compact nullptr checker
    if(p_number){
        cout << "Valid Memory address" << p_number << endl;
    }
    else{
        cout << "p_number points to Invalid Memory address: " << p_number << endl;
    }

    // Can delete a nullptr
    delete p_number;
    return 0;
}