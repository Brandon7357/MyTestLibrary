#include <iostream>
#include <dlfcn.h>

#include "../lib/engineMain.h"

using namespace std;

int main( int argc, char* argv[] ) {

    void* handle;
    handle = dlopen( "./libtestLib.so", RTLD_LAZY );

    if( !handle ) {

        cout<<"Cannot load engine library!"<<endl;
        return 0;

    };

    typedef void (*engineThingy_t)();
    engineThingy_t engineThingy = (engineThingy_t) dlsym( handle, "cmdRunMainEngineThingy" );
    engineThingy();
    dlclose( handle );
    return 0;

};
