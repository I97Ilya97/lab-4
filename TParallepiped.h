#include "TRectangle.h"
#include <iostream>

class TParallelepiped : public TRectangle
{
protected:

	float C;

public:

	TParallelepiped() : TRectangle(), C(0.0)
	{}

	TParallelepiped(float a, float b, float c) : TRectangle(a, b), C(c)
	{}

	virtual float Size() //обьем 
	{
		float volume = TRectangle::Size() * C;
		return volume;
	}

	virtual void Print()
	{
		std::cout << " C = " << C << std::endl << std::endl;
		TRectangle::Print();
	}
};
