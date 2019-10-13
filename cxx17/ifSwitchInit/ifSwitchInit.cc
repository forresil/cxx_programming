#include <algorithm>
#include <vector>

/**
 * Create a vector
 * */
std::vector<int> make_vec() { return {1, 2, 3, 4}; }

/*********************************************************************
 * MAIN
 *******************************************************************/
int main() {
  //------------------------------------------------------------/
  // C++14 Style
  //------------------------------------------------------------/
  auto vec = make_vec();

  {
    const auto itr = std::find(vec.begin(), vec.end(), 2);
    if (itr != vec.end()) {
      *itr = 3;
    } else {
      const auto front = vec.front();
      if (front != 2) {
        vec.insert(itr, 4);
      } else {
        return front;
      }
    }
  }

  {
    const auto itr = std::find(vec.rbegin(), vec.rend(), 4);
    if (itr != vec.rend()) {
      *itr = 4;
    }
  }

  //------------------------------------------------------------/
  // C++17 Style
  //------------------------------------------------------------/
  if (const auto itr = std::find(vec.begin(), vec.end(), 2); itr != vec.end()) {
    *itr = 3;
  } else if (const auto front = vec.front(); front != 2) {
    vec.insert(itr, 4);
  } else {
    // itr is here still on scope!
    return front;
  }

  if (const auto itr = std::find(vec.rbegin(), vec.rend(), 4);
      itr != vec.rend()) {
    *itr = 4;
  }
}
