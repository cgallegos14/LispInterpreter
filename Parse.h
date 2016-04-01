//
//  Parse.h
//  LispInterpreter
//
//  Created by Cris Gallegos  on 3/31/16.
//  Copyright (c) 2016 Cris Gallegos . All rights reserved.
//

#ifndef __LispInterpreter__Parse__
#define __LispInterpreter__Parse__

#include <stdio.h>
#include <string>
using namespace std;

string getCommand();
string parseCommand();
bool validExpression();
#endif /* defined(__LispInterpreter__Parse__) */
