#include <iostream>
#include <string>
#include "max.h"

using namespace std;

int main()
{
    double f1 = 3.4;
    double f2 = -6.7;
    cout << "max(f1,f2): " << ::max(f1, f2) << endl;
    
    string s1 = "mathmatics";
    string s2 = "math";
    cout << "max(s1,s2): " << ::max(s1, s2) << endl;
    
    return 0;
}
