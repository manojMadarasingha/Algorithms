#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    Person (){
        cout<<"Constructor of the base class is called"<<endl;
    }
    ~Person (){
        cout<<"Desstructor of the base class is called"<<endl;
    }

    void setName(string iname){name=iname;}
    void setAge(int iage){age=iage;}

};

/*When it is used the public access modifier access modifier get no change
in their values.*/

class Student : public Person{
    string school;
    int id;
public:
    Student (){
        cout<<"Constructor of the sub class is called"<<endl;
    }
    ~Student (){
        cout<<"Desstructor of the sub class is called"<<endl;
    }


    void setId(int iid){id=iid;}
    void setSchool(string ischool){school=ischool;}
    void display(){
        cout<<name<<endl<<age<<endl<<school<<endl<<id<<endl;
    }
};

/*Here it uses the private access modifier. Therefore all the members
of the base class have become private members*/
class Boy : private Person{
public:
    string levelOfGutts;

    void setBoyName(string iName){
        setName(iName);
    }

    void display(){
        cout<<endl<<name<<endl;
    }
};

/*In this class it uses the private modifier. but using the scope resolution
private members could be changed to the desired scope resolution*/
class Girl:private Person{
public:
    Person::setAge;
    Person::setName;

    string levlOfBeautiful;

    void display(){
        cout<<name<<endl<<age<<endl;
    }
};

class Child : public Boy, public Girl{
public:

    void BeautyAndGutts(string beauty,string gutts){
        levlOfBeautiful=beauty;
        levelOfGutts=gutts;
    }
    void display(){
        cout<<"Child is"<<levlOfBeautiful << "beautiful"<< levelOfGutts<< "Gutty"<<endl;
    }
};



int main()
{
    Student *s1=new Student();
    s1->setName("Chamara");
    s1->setAge(24);
    s1->setId(130338);
    s1->setSchool("H/Rajapaksha Central College");
    s1->display();
    delete s1;

    Boy b1;
    b1.setBoyName("Chamara Manoj");
    b1.display();

    Girl *g1=new Girl();
    g1->setAge(24);
    g1->setName("Narmada");
    g1->display();

    cout<<"\n"<<endl;
    Child baby;
    baby.BeautyAndGutts("highest","Not much");
    baby.display();
    return 0;
}
