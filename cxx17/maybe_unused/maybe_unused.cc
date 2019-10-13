#include <cassert>

// here maybe_unused avoid a compiler warning for
// this unused method
[[maybe_unused]] void something()
{
	 
}

// by commenting argc out the compiler ignores
// that the variable isn't be used, while for the
// sake of completion [[maybe_unused]] marks the 
// argv variable as unused for the compiler.
int main(int /*argc*/, [[maybe_unused]] const char *argv[])
{
	// maybe used also for member variables.
	 [[maybe_unused]] int i = 6;
	 // which would be pointed out by the compiler
	 // if the -DNDEBUG flag is used for 
	 // compilation. (hereby the next line will be
	 // disabled.)
	 assert(i == 6);
}
