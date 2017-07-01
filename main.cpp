
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
	start = timer_system_stamp_sec();

    cout<<"start: "<<start<<endl;
    sleep(1);
    tick_t then = timer_system_stamp_sec();
    cout<<"then: "<<then <<endl;
    cout<<"timer_elapsed: "<<(then-start)<<endl;

    
	timer_lib_shutdown();
//////////////


	return 0;
}

