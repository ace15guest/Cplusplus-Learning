#include <iostream>

using namespace std;

int main(){
    // Ways to handle when new fails
    int * lots_of_ints1 {new int[10000000]};

    for (size_t i{}; i<1000; ++i){
        try{
            int* lots_of_ints3 {new int[10000000]};
        }
        catch(exception& ex){
            cout << "Caught exception manually:" << ex.what() << endl;

        }
    }
    for (size_t i{}; i<1000; ++i){
        int * data = new(nothrow) int[100000000000];

        if (data!=nullptr){
            cout << "Data allocated" << endl;
        }
        else{
            cout << "Data allocation faiiled" << endl;
        }
    }

    cout << "Completed" << endl;
}