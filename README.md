# This is a c++ library that provides an easy way to time c++ programs.

## BASIC USAGE:
```c++
	int main() {
		program_timer timer;
		timer.start();
		//Your code here
		timer.stop();
		std::cout << "Time elapsed: " << timer.get_time() << endl;
	}
```

##For more extended documentation see the DOCS.md file
