#include <iostream>

//comment
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
		
		std::cout << "a + b= " << argv[argc - 1] << argv[1] << argv[2] << std::endl;
		std::cout << "a + b= "  << argv[1] <<  std::endl;
		std::cout << "a + b= " << argv[2] << std::endl;
		std::cout << argc << std::endl;
		return 0;
}