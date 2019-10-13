#include <vector>
#include <list>

int main()
{
	// In a VECTOR
	 //--------------------------------------------------------------------------------
	 std::vector<std::vector<int>> v; // create a vector of vectors of integers
	 v.push_back(std::vector<int>());  // add a new empty vector element
	 //--------------------------------------------------------------------------------
	 v.emplace_back(); // construct a 2nd new empty object of this type (most performing!)
	 //--------------------------------------------------------------------------------
	 v.emplace_back(3,1); // create a 3rd vector and populate it with 3 ones!
	 //--------------------------------------------------------------------------------
	 auto &new_vec = v.back();  // get a reference to the last member vector.
	 new_vec.push_back(4); // add a 4 to vector nr.3 (so we get {1,1,1,4} on this vector)
	 //--------------------------------------------------------------------------------
	 auto &new_vec4 = v.emplace_back(3,1); // since C++17 emplace_back returns a pointer!
	 new_vec4.push_back(4);
	 //--------------------------------------------------------------------------------
	 v.emplace_back(3,1).push_back(4); // since C++17 is this also possible! 
	 //--------------------------------------------------------------------------------
	 v.push_back({1,1,1,4}); // of course, here we could have do also something like this.. 

	 // In LIST
	 //--------------------------------------------------------------------------------
	 std::list<int> l; // create a list
	 l.emplace_front(2); // like push_back but more performant!
	 l.emplace_back(3); // also more performant!
	 std::list<int>::iterator i = l.emplace(++l.begin(),5); // since C++11 returns an iterator!
	 return *i;
}
