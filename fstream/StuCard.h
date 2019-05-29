#ifndef STUCARD_H
#define STUCARD_H
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;


class StuCard {
private:
	string name;
	bool sex;
	double scoreAry[3];
public:
	StuCard(string = " ", bool = 1, double = 0, double = 0, double = 0);
	void setName(string);
	void setSex(bool);
	void setScore(int, double);
	string getName();
	bool getSex();
	double getScore(int);
	void printCard();
	void writeToFile(fstream &);
	void readToFile(fstream &);

};
#endif
