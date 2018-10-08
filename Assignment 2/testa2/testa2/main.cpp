//
//  main.cpp
//  testa2
//
//  Created by Haoran Ma on 10/8/18.
//  Copyright © 2018 Haoran Ma. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool flag = true;
    while(flag)
    {
        string s;
        if(cin >> s)
            cout << s << '\n';
        else
            flag = false;
    }
    return 0;
}
