#include<iostream>
using namespace std;

// parent class
class A{
    public:
    void show1()
    {
        cout<<"Parent class"<<endl;
    }
};

// child class
class B : public A 
{
    public:
    void show2()
    {
        cout<<"child class";
    }
};

int main()
{
    B obj;
    obj.show1();
    obj.show2();

    return 0;
}