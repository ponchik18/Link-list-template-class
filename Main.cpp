#include"Class.h"

int main() {
	List<int> ds;
	ds.PushBack(5);
	ds.PushBack(10);
	ds.PushBack(15);
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] << std::endl;
	}
	std::cout << std::endl;
	ds.Insert(85, 3);
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] <<std:: endl;
	}
	std::cout << std::endl;
	ds.RemomeAt(2);
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] << std::endl;
	}
	ds.Insert(25,0);
	std::cout << std::endl;
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] << std::endl;
	}
	std::cout << std::endl;
	ds.PopBack();
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] << std::endl;
	}
	/*ds.PopBack();
	std::cout << std::endl;
	for (int i = 0; i < ds.getSize(); i++) {
		std::cout << ds[i] << std::endl;
	}*/

	//List<std::string> ds;
	//ds.PushBack("first");
	//ds.PushBack("second");
	//ds.PushBack("third");
	//std::cout << ds[0] <<std::endl;
	//std::cout << ds[1] <<std::endl;
	//std::cout << ds[9] << std::endl;
	return 0;
}