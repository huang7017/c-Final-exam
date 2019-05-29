#include "Ball.h"

Ball::Ball(int radius,const string& color):GeometricObject(color)
{
	this->radius = radius;
}

void Ball::setRadius(const int radius)
{
	this->radius = radius;
}

int Ball::getRadius() const
{
	return radius;
}

double Ball::getVolume() const
{
	return (4 * 3.14159*radius*radius*radius /3);
}

double Ball::getArea() const
{
	return 4*3.14159*radius*radius;
}
