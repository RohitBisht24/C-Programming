#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
    string name;
    int age;
};


// Exmaple : of inheritance
        // parent class
        class A{
            public:
            // mathod 1
            void show1()
            {
                cout<<"Parent class"<<endl;
            }
        };

        // child class
        class B : public A 
        {
            public:
            // method 2
            void show2()
            {
                cout<<"child class"<<endl;
            }
        };


// Main Function
int main()
{
    student s1;
    s1.name = "Rohit";
    s1.age = 20;

    B obj;
    obj.show1();
    obj.show2();

    cout<< s1.name<<" is "<<s1.age<<" year old. "<<endl;
    return 0;
}