#ifndef BALL_H
#define BALL_H

#include"GeometricObject.h"
class Ball:public GeometricObject {
public:
	Ball(int,const string&);
	void setRadius(const int);
	int getRadius()const;
	virtual double getVolume()const;
	virtual double getArea()const;
private:
	int radius;
};
#endif
