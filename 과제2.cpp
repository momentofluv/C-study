#include <iostream>
using namespace std;

class Shape{
private:
	string NAME;
	int A;
	int B;
	int C;
	double value;

public:
	Shape(string s) { NAME = s; A = 0; B = 0; value = 0; }
	~Shape() { cout << "Shape �Ҹ� " << NAME << " Ŭ����" << endl; }
	void setTwo(int a, int b) { A = a; B = b; }
	void setThree(int a, int b, int c) { A = a; B = b; C = c; }
	void AreaOval() {
		value = ((double)A / 2) * ((double)B / 2) * 3.14;
		cout << "Ÿ���� ���̴� " << value << "�̴�." << endl;
	}
	void AreaLadder() {
		value = (A + C) * B / 2;
		cout << "��ٸ����� ���̴� " << value << "�̴�." << endl;
	}
	void AreaRect() {
		value = A * B;
		cout << "�簢���� ���̴� " << value << "�̴�." << endl;
	}
};

int main() {
	Shape cir("CircleA");
	cir.setTwo(10, 20);
	cir.AreaOval();

	Shape rec("Rectangular");
	rec.setTwo(10, 20);
	rec.AreaRect();

	Shape lad("Ladder");
	lad.AreaLadder();
	lad.setThree(5, 10, 6);
	lad.AreaLadder();
	
	return 0;
}

