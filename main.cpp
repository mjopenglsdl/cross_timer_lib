
#include "timer.h"

#include <unistd.h>

#include <stdio.h>
#include <iostream>
using namespace std;



int main( int argc, char** argv )
{
	sectime_t start;


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

    printf("start: %.3f\n", start);
    sleep(1);
    sectime_t then = timer_system_stamp_sec();
    printf("then: %.3f\n", then);
    cout<<"timer_elapsed: "<<(then-start)<<endl;

    
	timer_lib_shutdown();
//////////////


	return 0;
}

