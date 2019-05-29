#include"Ball.h"
#include"Cube.h"
#include<iostream>
#include<iomanip>
using namespace std;
void display(GeometricObject &g) {
	cout << ", area:" << g.getArea()
		<< ", volume:" << g.getVolume()
		<< ", color:" << g.getColor() << endl;
}
int main() {
	int n;
	string c;
	cin >> n >> c;
	Ball ball(n, c);
	cin >> n >> c;
	Cube cube(n,c);
	cout << "Ball" << endl;
	cout << fixed << setprecision(1) << "radius:" << ball.getRadius();
	display(ball);
	cout << "Cube" << endl;
	cout << fixed << setprecision(1) << "length:" << cube.getLength();
	display(cube);
	system("pause");
}