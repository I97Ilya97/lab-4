#include <iostream>

class TRectangle
{
protected:
	float A, B;

public:
	TRectangle() : A(0.0), B(0.0)
	{}

	TRectangle(float a, float b) : A(a), B(b)
	{}

	virtual float Size() //площадь 
	{
		float square = A * B;
		return square;
	}

	virtual void Print()
	{
		std::cout << "A = " << A << std::endl;
		std::cout << "\nB = " << B << std::endl;
		std::cout << "\nSize = " << Size() << std::endl;
	}
};

