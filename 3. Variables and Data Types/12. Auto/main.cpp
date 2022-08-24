#include <iostream>

using namespace std;

int main(){
    auto var1 {12};
    auto var2 {12.0};
    auto var3 {14.0f};
    auto var4 {'e'};
    auto var5 {15.0l};

    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    cout << sizeof(var1) << endl;
    cout << sizeof(var2) << endl;
    cout << sizeof(var3) << endl;
    cout << sizeof(var4) << endl;
    cout << sizeof(var5) << endl;
    cout << sizeof(var6) << endl;
    cout << sizeof(var7) << endl;
    cout << sizeof(var8) << endl;    

    return 0;
}