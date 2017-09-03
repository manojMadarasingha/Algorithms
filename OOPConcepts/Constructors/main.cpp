#include <iostream>

using namespace std;

class Human{
private:
    string name;
    int age;


public:
    //Default constructor
    Human(){
        cout<<"Default Constructor";
    }

    // Overloadin the constrctors
    Human(string iname="No name",int iage=0){
        cout<< "Overloaded Constructor"<<endl;
        name=iname;
        age=iage;
    }

    //Desructor is called to release the memory used by the class object
    ~Human(){
        cout<< "Destructor is called to destroy the contructor and release the memory"<<endl;
    }
    void display();
};

//Class resolutino operator has been used in here.
void Human:: display(){
    cout<<"name :"<< name<< endl;
    cout<<"age :"<<age<<endl;
}


int main()
{
    Human *chamara=new Human("Chamara");
    chamara->display();
    delete chamara;

}
