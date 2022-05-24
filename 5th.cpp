#include <iostream>
#include <string>
using namespace std;

string* pClass = new string[3]{ "c++ ���α׷���","Linux ���α׷���","������" };
int i = 0;

class Member {
private:
	string name;		
	string id, aid;			// ȸ������ �� �ۼ��ϴ� ���̵�, �α��� �� �ۼ��ϴ� ���̵�
	int pwd, apwd;			// ȸ������ �� ����ϴ� ��й�ȣ, �α��� �� �ۼ��ϴ� ��й�ȣ
public:
	void setName() {
		cout << "�̸�: ";
		cin >> name;
	};
	void setId() {
		cout << "���̵�: ";
		cin >> id;
	};
	void setPassword() {
		cout << "��й�ȣ: ";
		cin >> pwd;
	};
	string getName() {
		return name;
	};
	string getId() {
		return id;
	};
	int getPassword() {
		return pwd;
	};

};

class Cart {
private:
	string apply[3]{ "0", "0", "0" };



public:
	void print() {
		cout << endl;
		for (i = 0; i < 3; i++) {
			cout << "[" << i + 1 << "]" << pClass[i] << " >> 000";
			cout << i + 1;
			cout << endl;
		}
		
	}
	void bag_course() {
		string a_num;
		cout << "�߰��� �м� ��ȣ >> ";
		cin >> a_num;
		{
			if (a_num == "0001") {
				if (apply[0] == "0") apply[0] = pClass[0];
				else if (apply[1] == "0") apply[1] = pClass[0];
				else apply[2] = pClass[0];
			}
			else if (a_num == "0002") {
				if (apply[0] == "0") apply[0] = pClass[1];
				else if (apply[1] == "0") apply[1] = pClass[1];
				else apply[2] = pClass[1];
			}
			else if (a_num == "0003") {
				if (apply[0] == "0") apply[0] = pClass[2];
				else if (apply[1] == "0") apply[1] = pClass[2];
				else apply[2] = pClass[2];
			}
		}
		if (apply[0] == apply[1]) {
			apply[1] = "0";
			cout << "�̹� MY ��ٱ��Ͽ� ����� �ֽ��ϴ�." << endl;
		}
		else if (apply[1] == apply[2]) {
			apply[2] = "0";
			cout << "�̹� MY ��ٱ��Ͽ� ����� �ֽ��ϴ�." << endl;
		}
		else if (apply[2] == apply[0]) {
			apply[2] = "0";
			cout << "�̹� MY ��ٱ��Ͽ� ����� �ֽ��ϴ�." << endl;
		}

	}

	void put_bag() {
		cout << "======== MY ��ٱ��� ========" << endl;

		cout << "1. ";
		if (apply[0] != "0") cout << apply[0];
		cout << endl;
		cout << "2. ";
		if (apply[1] != "0") cout << apply[1];
		cout << endl;
		cout << "3. ";
		if (apply[2] != "0") cout << apply[2];
		cout << endl;
	}

	};
	


int main() {
	int apwd, x, y;
	string aid;
	Member account[3];
	Member* p = account;
	Cart applying;
	while (1) {
		cout << "------------- ���￩�ڴ��б� ���������ý��� -------------" << endl;
		cout << "1. ȸ������" << endl;
		cout << "2. �α���" << endl;
		cout << endl;
		cout << "��ȣ�� �Է��ϼ��� >> ";
		cin >> x;
		cout << "---------------------------------------------------------" << endl;

		if (x == 1) {
			cout << endl;
			p[0].setName();
			p[1].setId();
			p[2].setPassword();
			cout << "=== ȸ������ ���� ===" << endl;
		}

		else if (x == 2) {
			cout << endl;
			cout << "���̵�: ";
			cin >> aid;
			cout << "��й�ȣ: ";
			cin >> apwd;
			{if ((p[1].getId() == aid) && (apwd == p[2].getPassword())) {
				cout << endl;
				cout << "=== �α��� ���� ===" << endl;
				cout << p[0].getName() << "�� ȯ���մϴ�." << endl;
				cout << endl;
				break;
			}
			else cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
			}

		}
		else cout << "1 �Ǵ� 2�� �Է����ּ���." << endl;
	}
	
		while (1) {
			{cout << "===============" << endl;
			cout << "1. ��ٱ���" << endl;
			cout << "2. ���� ���" << endl;
			cout << "3. ������û Ȯ��" << endl;
			cout << "4. �α׾ƿ�" << endl;
			cout << "��ȣ�� �Է��ϼ���: ";
			cin >> y; }
			switch (y) {
			case(1):
				applying.print();
				break;
			case(2):
				applying.bag_course();
				break;
			case(3):
				applying.put_bag();
				break;
			case(4):
				cout << "---------- �α׾ƿ� ----------" << endl;
				cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;
				return 0;
			}	
			
			
		}
		delete[] pClass;
		return 0;
}