#ifndef CUBE_H
#define CUBE_H
#include"GeometricObject.h"

class Cube:public GeometricObject{
public:
	Cube(int, const string& = "");
	void setLength(const int);
	int getLength()const;
	double getVolume()const;
	double getArea()const;
private:
	int length;
};
#endif
