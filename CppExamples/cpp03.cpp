#include "cpp03.h"
#include <iostream>
#include <vector>

using namespace std;

CPP03::CPP03()
{
    cout << __FUNCTION__ << endl;
}

void CPP03::runStlContainers()
{
    vector<int> iArr;
    iArr.push_back(1);
    iArr.push_back(2);
    iArr.insert(iArr.begin() + 1, 9);

    for (int i: iArr)
    {
        cout << i << endl;
    }
}
