#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class GameCharacter {

private:
	string name{};
	int age{};
	string job{};

public:
	GameCharacter() {};
	GameCharacter(const GameCharacter& c);
	~GameCharacter() { cout << "소멸자 실행" << endl; }

	void set() {
		cin >> name >> age >> job;
	};

	void setname() {
		cin >> name;
	};

	void setage() {
		cin >> age;
	};

	void setjob() {
		cin >> job;
	};

	void getname() {
		cout << name;
	};

	void getage() {
		cout << age;
	};

	void getjob() {
		cout << job;
	};
};

GameCharacter::GameCharacter(const GameCharacter& c) {
	name = c.name;
	this->age = c.age;
	job = c.job;
}

struct character {
	string name;
	int age;
	string job;
} editor;

int main() {

	int num, edit;
	GameCharacter chr1;

	cout << "1. 캐릭터 생성" << endl;
	cout << "생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요." << endl;
	cout << "참고사항: 직업의 종류는 자유롭게!" << endl;
	cout << "--> ";
	chr1.set();

	cout << "캐릭터가 생성되었습니다." << endl;

	cout << endl << "2. 캐릭터 복사" << endl;
	GameCharacter chr2(chr1);
	cout << "복사가 완료되었습니다." << endl;

	while (1) {
		cout << endl << "========== 캐릭터 관리 ==========" << endl;
		cout << "3. 캐릭터 정보 확인" << endl;
		cout << "4. 캐릭터 정보 수정" << endl;
		cout << "5. 종료" << endl;
		cout << "번호를 선택해주세요: ";
		cin >> num;

		switch (num) {
		case 3:
			cout << endl << "******** 캐릭터 정보 ********" << endl;
			cout << "캐릭터 이름: ";
			chr1.getname();
			cout << endl;
			cout << "캐릭터 나이: ";
			chr1.getage();
			cout << endl;
			cout << "캐릭터 직업: ";
			chr1.getjob();
			cout << endl;
			cout << endl << "******** 캐릭터 정보 ********" << endl;
			cout << "캐릭터 이름: ";
			chr2.getname();
			cout << endl;
			cout << "캐릭터 나이: ";
			chr2.getage();
			cout << endl;
			cout << "캐릭터 직업: ";
			chr2.getjob();
			cout << endl;
			break;

		case 4:
			cout << endl << "수정하고 싶은 캐릭터를 선택하세요. (1 or 2): ";
			cin >> edit;
			cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요." << endl;
			cout << "--> ";
			if (edit == 1) {
				chr1.set();
			}
			else if (edit == 2) {
				chr2.set();
			}
			cout << "정상적으로 수정되었습니다." << endl;
			break;

		case 5:
			cout << "종료되었습니다." << endl;
			return 0;

		}
	}
	return 0;
}