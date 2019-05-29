#include"StuCard.h"

int main() {
	StuCard s[5] = { {"Jerry", 1, 80.0, 70.0, 90.0 },{"John", 1, 85.0, 77.0, 95.0},
	{"Mary", 0, 83.0, 75.0, 70.0},{"Tom", 1, 73.0, 95.0, 67.0},{"Claire", 0, 88.0, 79.0, 71.0} };
	fstream txt;
	txt.open("score.txt", ios::out);
	for (int i = 0; i < 5; i++) {
		s[i].writeToFile(txt);
	}

	txt.close();
	txt.open("score.txt", ios::in);

	for (int i = 0; i < 5; i++) {
		s[0].readToFile(txt);
		s[0].printCard();
	}
	system("pause");
}