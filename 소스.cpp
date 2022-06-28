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
	~GameCharacter() { cout << "�Ҹ��� ����" << endl; }

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

	cout << "1. ĳ���� ����" << endl;
	cout << "������ ĳ������ �̸�, ����, ������ ������� �Է����ּ���." << endl;
	cout << "�������: ������ ������ �����Ӱ�!" << endl;
	cout << "--> ";
	chr1.set();

	cout << "ĳ���Ͱ� �����Ǿ����ϴ�." << endl;

	cout << endl << "2. ĳ���� ����" << endl;
	GameCharacter chr2(chr1);
	cout << "���簡 �Ϸ�Ǿ����ϴ�." << endl;

	while (1) {
		cout << endl << "========== ĳ���� ���� ==========" << endl;
		cout << "3. ĳ���� ���� Ȯ��" << endl;
		cout << "4. ĳ���� ���� ����" << endl;
		cout << "5. ����" << endl;
		cout << "��ȣ�� �������ּ���: ";
		cin >> num;

		switch (num) {
		case 3:
			cout << endl << "******** ĳ���� ���� ********" << endl;
			cout << "ĳ���� �̸�: ";
			chr1.getname();
			cout << endl;
			cout << "ĳ���� ����: ";
			chr1.getage();
			cout << endl;
			cout << "ĳ���� ����: ";
			chr1.getjob();
			cout << endl;
			cout << endl << "******** ĳ���� ���� ********" << endl;
			cout << "ĳ���� �̸�: ";
			chr2.getname();
			cout << endl;
			cout << "ĳ���� ����: ";
			chr2.getage();
			cout << endl;
			cout << "ĳ���� ����: ";
			chr2.getjob();
			cout << endl;
			break;

		case 4:
			cout << endl << "�����ϰ� ���� ĳ���͸� �����ϼ���. (1 or 2): ";
			cin >> edit;
			cout << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���." << endl;
			cout << "--> ";
			if (edit == 1) {
				chr1.set();
			}
			else if (edit == 2) {
				chr2.set();
			}
			cout << "���������� �����Ǿ����ϴ�." << endl;
			break;

		case 5:
			cout << "����Ǿ����ϴ�." << endl;
			return 0;

		}
	}
	return 0;
}