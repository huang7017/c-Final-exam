#include"StuCard.h"
StuCard::StuCard(string newName, bool newSex, double newScoreAry0, double newScoreAry1, double newScoreAry2) {
	name = newName;
	sex = newSex;
	scoreAry[0] = newScoreAry0;
	scoreAry[1] = newScoreAry1;
	scoreAry[2] = newScoreAry2;
}
void StuCard::setName(string newName) {
	name = newName;
}
void StuCard::setSex(bool newSex) {
	sex = newSex;
}

void StuCard::setScore(int seat, double newScore) {
	scoreAry[seat] = newScore;
}

string StuCard::getName() {
	return name;
}
bool StuCard::getSex() {
	return sex;
}
double StuCard::getScore(int seat) {
	return scoreAry[seat];
}

void StuCard::printCard() {
	cout << getName() << " " << getSex() << " " << fixed << setprecision(1) << getScore(0) << " " << getScore(1) << " " << getScore(2) << endl;
}

void StuCard::writeToFile(fstream & out)
{
	out << name << " " << sex << " " << scoreAry[0] << " " << scoreAry[1] << " " <<scoreAry[2];
}

void StuCard::readToFile(fstream & input)
{
	input >> name >> sex >> scoreAry[0] >> scoreAry[1] >> scoreAry[2];
}
