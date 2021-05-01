#include <iostream>

using namespace std;

class A{
  public:
    int* px;
    int* x;
};

int main()
{
    cout << "Generic C++ Examples" << endl;
    cout << "size of A is: " << sizeof(A) << endl;
    cout << "size of *int: " << sizeof(int*) << endl;
    cout << " size of int: " << sizeof(int) << endl;
    return 0;
}
