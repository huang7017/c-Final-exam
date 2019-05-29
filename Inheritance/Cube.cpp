#include "Cube.h"

Cube::Cube(int length, const string & color):GeometricObject(color)
{
	this->length = length;
}

void Cube::setLength(const int length)
{
	this->length = length;
}

int Cube::getLength() const
{
	return length;
}

double Cube::getVolume() const
{
	return length*length*length;
}

double Cube::getArea() const
{
	return 6*length*length;
}
