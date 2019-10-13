/** 
 * @note This struct should never be ignored!
 */
struct [[nodiscard]] MyError
{
	 
};

MyError something_goWrong(){
	return {};
}

//---------------------------------------------
enum [[nodiscard]] myEnum
{
	VAL1,
	VAL2
};

myEnum selectSomehtingImportant(){
	return VAL1;
}
//---------------------------------------------

/**
 * @notice Ther return value of this funciton
 * is important!. It shouldn't be discarted!
 */
[[nodiscard]] int something() { return 1; }

//---------------------------------------------
// MAIN
//---------------------------------------------
int main() {

 //This error must be handled!
 auto myerror = something_goWrong(); 

 // You have to do something with this enum!
 selectSomehtingImportant();
 
  // you must explicity declare that this
  // return value won't be used!
  [[maybe_unused]] int i = something();

  // you get a warning, if ther return value
  // of this function is ignored!
  return something();
}
