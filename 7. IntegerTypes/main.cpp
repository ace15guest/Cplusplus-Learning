#include <iostream>
#include <string>

using namespace std;

int main(){
    //Braced Initioalizers 
    
    int elephant_count; // Variable may contain garbage . WARNING

    int lion_count{}; // init to 0 

    int dog_count{10}; // init to 10 

    int cat_count{15}; // init to 15

    int domestic_animal {dog_count + cat_count};
    
    // This will throw an error    int narrowing_conversion {2.9}
    // This wll not throw an error which is dangerous int narrowing_conversion (2.9)
    cout << "Domestic Animals: " << domestic_animal << endl;
    cout << sizeof(domestic_animal) << endl;

    return 0;
}