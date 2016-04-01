//
//  Parse.cpp
//  LispInterpreter
//
//  Created by Cris Gallegos  on 3/31/16.
//  Copyright (c) 2016 Cris Gallegos . All rights reserved.
//

#include "Parse.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

string getCommand(){
    string command = "";
    cout << "Prompt> ";
    getline(cin, command);
    return command;
}

bool validExpression(string command){
    bool isAnExpression = true;
    stack <string> paraenthesesStack;
    int commandLength = (int)command.length();
    cout << command << endl;
    for(int i = 0; i <= commandLength; i++){
        char tempChar = command[i];
        if(tempChar == '('){
            paraenthesesStack.push("(");
            cout << "push ==> " << tempChar <<  endl;
        }
        if(tempChar == ')'){
            if(paraenthesesStack.size() != 0){
                paraenthesesStack.pop();
                cout << "pop ==> " << tempChar << endl;
            }
            else{
               paraenthesesStack.push("no");
            }
        }
    }
    
    if(paraenthesesStack.size() != 0){
        isAnExpression = false;
    }
    
    return isAnExpression;
}

string parseCommand(){
    string tokenString = "";
    while (true){
        string command = getCommand();
        if(command == "(quit)"){
            break;
        }
        
        if(validExpression(command) == true){
            cout << command << endl;
            //return tokenString;
        }
        else{
            cout << "not a valid command" << endl;
        }
        
    }
    return tokenString;
}



