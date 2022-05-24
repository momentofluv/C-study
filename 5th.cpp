#include <iostream>
#include <string>
using namespace std;

string* pClass = new string[3]{ "c++ 프로그래밍","Linux 프로그래밍","리버싱" };
int i = 0;

class Member {
private:
	string name;		
	string id, aid;			// 회원가입 시 작성하는 아이디, 로그인 시 작성하는 아이디
	int pwd, apwd;			// 회원가입 시 등록하는 비밀번호, 로그인 시 작성하는 비밀번호
public:
	void setName() {
		cout << "이름: ";
		cin >> name;
	};
	void setId() {
		cout << "아이디: ";
		cin >> id;
	};
	void setPassword() {
		cout << "비밀번호: ";
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
		cout << "추가할 학수 번호 >> ";
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
			cout << "이미 MY 장바구니에 담겨져 있습니다." << endl;
		}
		else if (apply[1] == apply[2]) {
			apply[2] = "0";
			cout << "이미 MY 장바구니에 담겨져 있습니다." << endl;
		}
		else if (apply[2] == apply[0]) {
			apply[2] = "0";
			cout << "이미 MY 장바구니에 담겨져 있습니다." << endl;
		}

	}

	void put_bag() {
		cout << "======== MY 장바구니 ========" << endl;

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
		cout << "------------- 서울여자대학교 종합정보시스템 -------------" << endl;
		cout << "1. 회원가입" << endl;
		cout << "2. 로그인" << endl;
		cout << endl;
		cout << "번호를 입력하세요 >> ";
		cin >> x;
		cout << "---------------------------------------------------------" << endl;

		if (x == 1) {
			cout << endl;
			p[0].setName();
			p[1].setId();
			p[2].setPassword();
			cout << "=== 회원가입 성공 ===" << endl;
		}

		else if (x == 2) {
			cout << endl;
			cout << "아이디: ";
			cin >> aid;
			cout << "비밀번호: ";
			cin >> apwd;
			{if ((p[1].getId() == aid) && (apwd == p[2].getPassword())) {
				cout << endl;
				cout << "=== 로그인 성공 ===" << endl;
				cout << p[0].getName() << "님 환영합니다." << endl;
				cout << endl;
				break;
			}
			else cout << "아이디 혹은 비밀번호가 틀렸습니다." << endl;
			}

		}
		else cout << "1 또는 2만 입력해주세요." << endl;
	}
	
		while (1) {
			{cout << "===============" << endl;
			cout << "1. 장바구니" << endl;
			cout << "2. 강의 담기" << endl;
			cout << "3. 수강신청 확인" << endl;
			cout << "4. 로그아웃" << endl;
			cout << "번호를 입력하세요: ";
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
				cout << "---------- 로그아웃 ----------" << endl;
				cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;
				return 0;
			}	
			
			
		}
		delete[] pClass;
		return 0;
}