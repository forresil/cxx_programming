/**
 * if constexpr statements in c++17 replace the old preprocessor
 * ifdef/ifnotdef keys and extends it's functionality.
 * */
#include <iostream>
#include <limits>
#include <type_traits>
/**
 * @brief evaluate an object of any type an says if this object is an 
 * integer or not.
 * */
template <typename T> void print_type_info(const T &) {
  if (std::is_integral<T>::value) {
    std::cout << "is integral\n";
  } else {
    std::cout << "is not integral\n";
  }
}

template <typename T> auto smart_add(const T &t) {
  if constexpr (std::is_integral<T>::value && !std::is_same<bool, T>::value) {
    if constexpr (std::numeric_limits<T>::min() < 1000) {
      return t + 1;
    }
  } else if constexpr (std::is_floating_point<T>::value) {
    return t + 0.1;
  } else {
    return t;
  }
}

template <typename T> constexpr bool is_both() {
  if constexpr (std::is_integral<T>::value && !std::is_same<bool, T>::value) {
    if constexpr (std::numeric_limits<T>::max() < 1000) {
      return true;
    }
  }
  return false;
}

template <typename T> auto intelligent_add(const T &t) {
  if constexpr (is_both<T>()) {
    return t + 1;
  } else if constexpr (std::is_floating_point<T>::value) {
    return t + 0.1;
  } else {
    return t;
  }
}
int main() {
  print_type_info(5);
  print_type_info(2.3);

  std::cout << smart_add(5) << std::endl;
  std::cout << smart_add(2.3) << std::endl;
  std::cout << smart_add(true) << std::endl;
  std::cout << smart_add("hello world") << std::endl;
  std::cout << intelligent_add("hello world") << std::endl;
  std::cout << intelligent_add(511) << std::endl;
  std::cout << intelligent_add(1011) << std::endl;
}
