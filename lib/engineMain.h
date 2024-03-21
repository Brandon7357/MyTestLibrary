#include "../include/myLibHeader.h"
#include "myMain.h"


using namespace std;


void cmdRunMainEngineThingy() {

    MyMainClass* myEngine = new MyMainClass();
    myEngine->changeString( "New World!!" );
    delete myEngine;

};
