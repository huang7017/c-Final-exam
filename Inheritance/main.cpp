#include"Ball.h"
#include"Cube.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	string c;
	cin >> n >> c;
	Ball ball(n, c);
	cin >> n >> c;
	Cube cube(n,c);
	cout << "Ball" << endl;
	cout << fixed<<setprecision(1)<<"radius:"<<ball.getRadius()
		<<", area:"<< ball.getArea()
		<<", volume:" << ball.getVolume()
		<<", color:"<< ball.getColor() << endl;
	cout << "Cube" << endl;
	cout << fixed << setprecision(1) << "length:" << cube.getLength()
		<< ", area:" << cube.getArea()
		<< ", volume:" << cube.getVolume()
		<< ", color:" << cube.getColor() << endl;
	system("pause");
}