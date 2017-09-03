#include <iostream>

using namespace std;


class Boss{
private:
    int salary;
    string name;

public:

    Boss (string iname,int isalary){
        salary=isalary;
        name=iname;
    }

    void displayBoss(){
        cout<<salary<<endl<<name<<endl;
    }
friend class Workers;
friend void getDetails(Boss B);
};

void getDetails(Boss B){
    cout<<"Using the funciton"<<endl;
    cout<<B.name<<endl<<B.salary<<endl;
}

class Workers{
private:
    string name;
    string section;
public:
    Workers(string iname, string isection){
        name=iname;
        section=isection;
    }

    void displayWorker(){
        cout<<name<<endl<<section<<endl;
    }

   void displayBoss(Boss b1){
        cout<<b1.salary<<endl<<b1.name<<endl;
    }
};

int main()
{
    Workers w1("Worker 1","HR");
    Boss b1("Boss 1",150000);

    //b1.displayWorker(w1);

    w1.displayBoss(b1);
    getDetails(b1);
    return 0;
}
