#include <iostream>
/*It is described the static methods and variables*/
using namespace std;

class Workers{
public:

    Workers(){
        cout<<"Worker created"<<endl;
        numOfWorkers++;
    }

    ~Workers(){
        cout << "Worker deleted"<<endl;
        numOfWorkers--;
    }

    static int numOfWorkers;
    static void getCount(){
        cout<<"Display the number of People "<< numOfWorkers<<endl;
    }
};

int Workers::numOfWorkers=0;

int main()
{
    Workers *w1=new Workers();
    Workers *w2=new Workers();
    Workers *w3=new Workers();
    Workers *w4=new Workers();
    Workers *w5=new Workers();

    w1->getCount();

    delete w1;
    delete w2;


    w3->getCount();

    cout<<"Using the direct accessing "<< w3->numOfWorkers<<endl;

    return 0;
}

