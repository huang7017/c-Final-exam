#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include<string>

using namespace std;
class GeometricObject {
public:
	GeometricObject(const string& = " ");
	void setColor(const string&);
	string getColor() const;

private:
	string color;
};
#endif
