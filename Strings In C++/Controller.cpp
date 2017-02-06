//
//  Controller.cpp
//  Strings In C++
//
//  Created by Moffat, Braeden on 2/2/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

Controller :: Controller()
{
    Words = "These is words.";
    otherWords = "These is more words.";
    
}

void Controller :: start()
{
    numberMethods();
}

//Test out methods that use numbers on strings in C++
void Controller::numberMethods()
{
    int count = Words.size();
    cout << "The number of letters in your entry is: " << count << endl;
    cout << "Looks like the size() method is the same as length()." << endl;
    
    string temp = Words.substr(3);
    cout << temp << endl;
    
    
    
}
