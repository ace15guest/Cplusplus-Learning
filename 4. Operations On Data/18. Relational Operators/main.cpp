#include <iostream>

using namespace std;

int main(){
   int num1 {30};
   int num2 {13};

   cout << boolalpha;

   cout << "num1 < num2: " << (num1<num2) << endl;
   cout << "num1 <= num2: " << (num1<=num2) << endl;
   cout << "num1 == num2: " << (num1==num2) << endl;
   cout << "num1 != num2: " << (num1!=num2) << endl;

    return 0;
}