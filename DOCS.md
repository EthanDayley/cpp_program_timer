# cpp_program_timer documentation
- program_timer is a class which makes timing your c++ programs easy.

# BASIC USAGE:
```c++
	#include "cpp_program_timer.hpp"
	#include <iostream> //For cout, not necessary for program_timer function.
	
	int main() {
		program_timer timer;
		timer.start();
		//Your code here
		timer.stop();
		std::cout << "Time elapsed: " << timer.get_time() << endl;
	}
```

# FUNCTIONS:
## void start():
	1 starts the timer.
	2 nuff said.
## void stop():
	1 stops the timer.
	2 see line 2 of start() function docs.
## get_time():
	1 returns a double float value containing the number of seconds between
	2 program_timer.start() and program_timer.stop().
