#ifndef __ENGINE_MAIN_H__
#define __ENGINE_MAIN_H__

#include "myMain.h"

void cmdRunMainEngineThingy() {

    MyMainClass* myEngine = new MyMainClass();
    myEngine->changeString( "New World!!" );
    delete myEngine;

};

#endif
