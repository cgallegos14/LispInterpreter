//
//  main.cpp
//  LispInterpreter
//
//  Created by Cris Gallegos  on 3/31/16.
//  Copyright (c) 2016 Cris Gallegos . All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Parse.h"
#include <string>
using namespace::std;

int main(int argc, const char * argv[]) {
    cout << "Welcome to FANCY lisp interpreter " << endl;
    parseCommand();
    return 0;
}
