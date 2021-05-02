#include <iostream>
#include <math.h>
#include "cpp03.h"

using namespace std;

class A{
    int* px;
public:
    A()
    {
        px = new int();
    }
    virtual void fcn()
    {
        cout << "A->" << __FUNCTION__ << endl;
    }
    virtual ~A()
    {
        cout << "A->" << __FUNCTION__ << endl;
        delete(px);
    }
};

class B: public A
{
    int* py;
public:
    B()
    {
        py = new int();
    }
    void fcn()
    {
        cout << "B->" << __FUNCTION__ << endl;
    }
    virtual ~B()
    {
        cout << "B->" << __FUNCTION__ << endl;
        delete(py);
    }
};

int main()
{
    CPP03* cpp03 = new CPP03();
    cpp03->runStlContainers();


    cout << "===================== GENERIC CPP ================================" << endl;
    /*cout << "Generic C++ Examples" << endl;
    cout << "size of A is: " << sizeof(A) << endl;

    cout << "size of *int: " << sizeof(int*) << endl;
    cout << "size of int: " << sizeof(int) << endl;

    cout << "sizes of the data types (bytes):" << endl;
    cout << "char size:" << sizeof(char) << endl;
    cout << "short size:" << sizeof(short) << endl;
    cout << "int size:" << sizeof(int) << endl;
    cout << "long size:" << sizeof(long) << endl;
    cout << "bool size:" << sizeof(bool) << endl;
    cout << "float size:" << sizeof(float) << endl;
    cout << "double size:" << sizeof(double) << endl;

    int arr[10] = {1, 2, 3};
    cout << "size of the array: " << sizeof(arr)/sizeof(int) << endl;

    cout << "7/3:" << 7/3 << endl;
    cout << "7%3:" << 7%3 << endl;
    cout << "2^7:" << pow(2,7) << endl;
    cout << "2^8:" << pow(2,8) << endl;
    cout << "log10 1000:" << log10(1000) << endl;

    A *pa = new A();
    A *pb = new B();

    pa->fcn();
    pb->fcn();
    cout << "Destructors are called for pb:" << endl;
    delete(pb);
    cout << "Destructors are called for pa:" << endl;
    delete(pa);*/
    return 0;
}
