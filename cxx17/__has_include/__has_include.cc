//--------------------------------------------------------------------------------
//C++14
//--------------------------------------------------------------------------------
//#if defined(__linux__) || defined(__unix__) || defined(__APPLE__) || defined(__HAIKU__)
//#include <unistd.h>
//#endif
//
//#if defined(_POSIX_VERSION) && !defined(__CYGWIN__)
//#include <dlfcn.h>
////#pragma message "Is posix-y"
//// dlopen
//#endif
//
//#if defined(_WIN32) || defined(__CYGWIN__)
//#include <windows.h>
//// LoadLibrary
//#endif

//--------------------------------------------------------------------------------
// C++17
//--------------------------------------------------------------------------------
#if __has_include(<unistd.h>)
#include <unistd.h>
#endif

#if __has_include(<dlfcn.h>)
#include <dlfcn.h>
//#pragma message "Is posix-y"
#endif

#if __has_include(<windows.h>)
#include <windows.h>
#endif

int main(){
}
