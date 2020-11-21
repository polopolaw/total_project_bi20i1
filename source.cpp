#include <iostream>


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
		
		std::cout << "a + b= " << argv[argc - 1] << argv[1] << argv[2] << std::endl;
<<<<<<< HEAD
        std::cout << "a + b= " << argv[argc - 1] << argv[1] << argv[2] << std::endl;
=======
		std::cout << "a + b= "  << argv[1] <<  std::endl;
		std::cout << "a + b= " << argv[2] << std::endl;
>>>>>>> 8fd63425ea9b085146c04f4cba7f7c4124f3ce39
		std::cout << argc << std::endl;
		return 0;
}