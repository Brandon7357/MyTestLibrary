#include <iostream>
#include <string>

#include "myMain.h"

using namespace std;


void MyMainClass::changeString( std::string tmpStr ) {

    name.clear();
    name = tmpStr;
    cout<<name<<endl;

};
