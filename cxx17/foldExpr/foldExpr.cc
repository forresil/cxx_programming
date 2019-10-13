#include <iostream>
/**
 * Sum
 * */
template<typename ... T>
auto sum(T ... t)
{
	 return (t + ... );
}

/**
 * Division
 * */
template<typename ... T>
auto div(T ... t)
{
	 return (t / ... );
}

/**
 * Average 
 * */
template<typename ... T>
auto avg(T ... t)
{
	 return (t + ... ) / sizeof...(t);
}

/**********************************************************************************
 * MAIN
 *********************************************************************************/
int main(){
	 std::cout << sum(1,2,3.0, 4,5) << '\n';
	 std::cout << div(1.0,2.0,3.0, 4.0,5.0) << '\n';
	 std::cout << avg(1.0,2.0,3.0, 4.0,5.0) << '\n';
}

