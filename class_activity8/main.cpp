//
//  main.cpp
//  class_activity8
//
//  Created by Sonia Lopchan on 9/15/24.
//How can we change this code so the result of this division is a double value?

#include <iostream>
using namespace std;

int main ()
{
    int x = 10;
    int y = 3;
    // double z = x/(double)y;
    double z = (double)x/y;
  //  double z = static_cast<double>(x)/y;
    
    cout <<z<< endl;

    return 0;
}
