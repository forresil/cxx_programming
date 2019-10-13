#include <iostream>
#include <algorithm>

// Organizing your code in packages with C++17
namespace org::group::project::internal{
	struct MyStruct{
		int a{2};
	};
}

int main(const int argc, const char *[]){
	// calling the code in packages
	org::group::project::internal::MyStruct s;

	 //C++14
	std::cout << ((argc<2)?2:((argc > 5)?5:argc)) << std::endl; 

	//C++17
	std::cout << std::clamp(argc, s.a, 5) << '\n';
}
