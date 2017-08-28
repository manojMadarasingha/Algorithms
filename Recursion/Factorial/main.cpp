#include <iostream>

using namespace std;

// Creating the template for the function
class Factorial{
public:
    int getFactorial(int number);
};

//call the function recursively
int Factorial::getFactorial(int number){
    if (number == 1){
        return 1;
    }
    else{
        Factorial *tempObject = new Factorial();
        return number * tempObject->getFactorial(number-1);
    }
}

int main()
{

    int val;
    Factorial obj;
    //call the function
    val=obj.getFactorial(3);
    cout<<val<<endl;

}
