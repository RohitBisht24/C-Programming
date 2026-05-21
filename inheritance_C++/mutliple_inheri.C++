#include<iostream>
using namespace std;

class A{
    public:
    void func1()
    {
        cout<<"parent class1"<< endl;
    }
};

class B{
    public:
    void func2()
    {
        cout<<"parent class2"<< endl;
    }
};

class C : public A, public B {
    public:
    void func3()
    {
        cout<<"child class"<< endl;
    }
};

int main()
{
    C output;
    output.func1();
    output.func2();
    output.func3();
}