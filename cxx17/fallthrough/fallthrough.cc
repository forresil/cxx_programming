void do_something(){}
void do_something_else(){}

int main(int argc, const char *[])
{
	 switch(argc)
	 { 
		case 1: /*if case 1 & 2 are doing the same thing you don't need to type nothing! */ 
		case 2:
			do_something();
			break;

		case 3:
			do_something();
			[[fallthrough]]; /*in C++17, if you need to fall through you have to be explicit!*/

		case 4:
			do_something_else();
			break;

		default:
			break; 
	 }

	 return 1;
}
