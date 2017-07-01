# cross_timer_lib  -  v0.9  -  Public Domain

## Modifications
There is a need that I have to use some sort of cross-platform timestamp output like **ros::Time().toSec()** did.
The origin code was done using UNIX makefile and VS project.
I did some modification to the original project and build it using **cmake**. The output(second format) looks like:


    time: 1498881655.179
    time: 1498881656.179



## Original Copyright
2011 Mattias Jansson / Rampant Pixels

This library provides a cross-platform interface to measure
elapsed time with (at least) millisecond accuracy. The latest
source code is always available at

https://github.com/rampantpixels/timer_lib

This library is put in the public domain; you can redistribute
it and/or modify it without any restrictions.

For a complete cross-platform application framework, look at
the foundation library available at

https://github.com/rampantpixels/foundation_lib
