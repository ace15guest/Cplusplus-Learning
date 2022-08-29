
#include <iostream>


int main(){

	int number1 {75};
    int number2 {60};
    bool result = (number1 < number2);//Expression yielding the condition

    std::cout << std::endl;
	std::cout << "Nesting if statements" << std::endl;
	
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};
     std::cout << std::endl;
	 std::cout << "Police officer stops(less verbose)" << std::endl;
	 if(green && !police_stop){
         std::cout << "Go" << std::endl;
     }else{
         std::cout << "Stop" << std::endl;
     }


    

    return 0;
}