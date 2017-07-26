# cpp_program_timer documentation

program_timer is a class which makes timing your c++ programs easy.

# BASIC USAGE:
	\#include "cpp_program_timer.hpp"
	\#include <iostream> //For cout, not necessary for program_timer function.
	
	int main() {
		program_timer timer;
		timer.start();
		//Your code here
		timer.stop();
		std::cout << "Time elapsed: " << timer.get_time() << endl;
	}

# FUNCTIONS:
## void start():
		starts the timer.
		nuff said.
## void stop():
		stops the timer.
		see line 2 of start() function docs.
## get_time():
		returns a double float value containing the number of seconds between
		program_timer.start() and program_timer.stop().
