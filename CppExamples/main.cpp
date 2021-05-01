#include <iostream>
#include <math.h>

using namespace std;

class A{
    int x;
public:
    A()
    {
        x = 0;
    }
    void fcn()
    {
        cout << __FUNCTION__ << endl;
    }
};

class B: A
{
    int y;
public:
    B()
    {
        y=0;
    }
    void fcn()
    {
        cout << __FUNCTION__ << endl;
    }
};

int main()
{
    cout << "Generic C++ Examples" << endl;
    cout << "size of A is: " << sizeof(A) << endl;
    cout << "size of *int: " << sizeof(int*) << endl;
    cout << " size of int: " << sizeof(int) << endl;

    cout << "sizes of the data types (bytes):" << endl;
    cout << "char size:" << sizeof(char) << endl;
    cout << "short size:" << sizeof(short) << endl;
    cout << "int size:" << sizeof(int) << endl;
    cout << "long size:" << sizeof(long) << endl;
    cout << "bool size:" << sizeof(bool) << endl;
    cout << "float size:" << sizeof(float) << endl;
    cout << "double size:" << sizeof(double) << endl;

    cout << "7/3:" << 7/3 << endl;
    cout << "7%3:" << 7%3 << endl;
    cout << "2^7:" << pow(2,7) << endl;
    cout << "2^8:" << pow(2,8) << endl;
    cout << "log10 1000:" << log10(1000) << endl;

    int arr[10] = {1,2,3};
    int arr2[10]{1,2,3};

    for (int i=0; i<10; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
        cout << "arr2[" << i << "] = " << arr2[i] << endl;
    }


    A a;
    A *pa = new A();
    a.fcn();
    pa->fcn();
    delete(pa);



    return 0;
}
