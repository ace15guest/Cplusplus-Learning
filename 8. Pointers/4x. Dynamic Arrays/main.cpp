#include <iostream>

using namespace std;

int main(){
    const size_t size{10};

    double *p_salaries {new double[size]}; // contains garbage values

    for (size_t i{}; i < size; i++){
        cout << p_salaries[i]<< " : " << *(p_salaries+1)<<endl;
    }

    int *p_students { new(nothrow) int[size]{}}; // All values are zero

    double *p_scores {new(nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double first 5 are initialized and the rest are zero
    
    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    // Static vs Dynamic Array
    cout << "================================================" <<endl;
    int scores[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the e
    cout << "scores size: " << std::size(scores) << endl;

    for (auto s:scores){
        cout << "value: " << s << endl;
    }

    int *p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
    cout << "p_scores1 memory location: " << p_scores1 << endl;
    // cout << "p_scores size: " << std::size(p_scores1) << endl; will not work because p_scores 1 is a memory location

    return 0;
}