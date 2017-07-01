
#include "timer.h"

#include <unistd.h>

#include <iostream>
using namespace std;



int main( int argc, char** argv )
{
	tick_t start;


////////
	timer_lib_initialize();

//// SYS SPEC TIME
//	start = timer_current();    
//    // sleep 1 sec
//    sleep(1);
//    cout<<"then: "<<timer_current()<<endl;
//    cout<<"timer_elapsed: "<<timer_elapsed(start)<<endl;
    
    
    
/// UNIX TIME
	start = timer_system();

    cout<<"start: "<<start<<endl;
    sleep(1);
    tick_t then = timer_system();
    cout<<"then: "<<then <<endl;
    cout<<"timer_elapsed: "<<(then-start)/1000<<endl;

    
	timer_lib_shutdown();
//////////////


	return 0;
}

