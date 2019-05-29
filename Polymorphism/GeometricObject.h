#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include<string>

using namespace std;
class GeometricObject {
public:
	GeometricObject(const string& = " ");
	void setColor(const string&);
	string getColor() const;
	virtual double getVolume()const = 0;
	virtual double getArea()const = 0;
private:
	string color;
};
#endif
