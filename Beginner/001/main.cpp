//
//  main.cpp
//   Input numbers, Output stops when 42 is typed
//
//  Created by JLegendary on 8/27/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a;
    
    while(1)
    {
        cin >> a;
        if(a==42)
            break;
        cout << a << endl;
    }
    
    return 0;
}