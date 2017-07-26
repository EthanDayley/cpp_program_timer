//For documentation see DOCS.md
//Free for any use, do whatever the heck you want with this.

#include <time.h>

class program_timer {
	public:
		program_timer();
		~program_timer();
		void start();
		void stop();
		double get_time();
	//private:
		clock_t _start_time;
		clock_t _stopped_time;
};

program_timer::program_timer() {}
program_timer::~program_timer() {}

void program_timer::start() {
	_start_time = clock(); //get current time
}
void program_timer::stop() {
	_stopped_time = clock();
}
double program_timer::get_time() {
	return 1.0 * (_stopped_time - _start_time) / CLOCKS_PER_SEC;
}
