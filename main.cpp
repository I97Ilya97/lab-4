#include <iostream> 

int main()
{
	TRectangle * r = new TRectangle(3, 7);
	TParallelepiped * p = new TParallelepiped(9, 5, 9);
	std::cout << "Rectangle : " << std::endl;
	r->Print();
	std::cout << std::endl << "Parallelepiped : " << std::endl;
	p->Print();
	system("pause");
	return 0;
}
