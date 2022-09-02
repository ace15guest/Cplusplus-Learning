#include <iostream>

using namespace std;

int main(){

 int* p_number4{nullptr};
 p_number4 = new int; // Dynamically allocate space for a single int on the heap
                      // Memory in this location is ours until we give it back

*p_number4 = 77;
cout << "Dynamically allocating memory: " << endl;
cout << "*p_number4: " << p_number4 << " What is the diff " << &p_number4 << " IDK " << *p_number4<< endl;

int *p_number5 {new int};
int *p_number6 {new int (22)};
int *p_number7 {new int {23}};

 cout << "p_number5: " << p_number5 << endl;
 cout << "*p_number5: " << *p_number5 << endl;
 
 cout << "p_number6: " << p_number6 << endl;
 cout << "*p_number6: " << *p_number6 << endl;



}