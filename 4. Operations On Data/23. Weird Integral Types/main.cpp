#include <iostream>

using namespace std;

int main(){
//Integral types less than 4 bytes in size don't suport arithmatic operations
short int var1 {10}; // 2 bytes
short int var2 {20};

char var3 {40}; // 1 byte
char var4 {50};

cout << sizeof(var1) << endl;
cout << sizeof(var2) << endl;
cout << sizeof(var3) << endl;
cout << sizeof(var4) << endl;

auto result1 = var1 + var2;
auto result2 = var3 + var4;

cout << sizeof(result1) << endl;
cout << sizeof(result2) << endl;

return 0;


}