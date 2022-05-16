#include <iostream>
using namespace std;

class Shape{
private:
	string NAME;		// Ÿ��, �簢��, ��ٸ��� � ������ ���̸� ���� ������ ǥ��
	int A;				// ����
	int B;				// ����
	int C;				// ����2 (��ٸ��� ��꿡���� ���)
	double value;

public:
	Shape(string s) { NAME = s; A = 0; B = 0; value = 0; }		// ������ ����
	~Shape() { cout << "Shape �Ҹ� " << NAME << " Ŭ����" << endl; }	// �Ҹ��� ����, ���α׷��� �������� �� ������ ���� �������� ��µ�
	void setTwo(int a, int b) { A = a; B = b; }		// ����, ���ΰ� ����
	void setThree(int a, int b, int c) { A = a; B = b; C = c; }		// ��ٸ��� ����, ���ΰ� ����
	void AreaOval() {										// Ÿ���� ���� ���ϴ� �Լ�
		value = ((double)A / 2) * ((double)B / 2) * 3.14;
		cout << "Ÿ���� ���̴� " << value << "�̴�." << endl;
	}
	void AreaLadder() {										// ��ٸ����� ���� ���ϴ� �Լ�
		value = (A + C) * B / 2;
		cout << "��ٸ����� ���̴� " << value << "�̴�." << endl;
	}
	void AreaRect() {										// �簢���� ���� ���ϴ� �Լ�
		value = A * B;
		cout << "�簢���� ���̴� " << value << "�̴�." << endl;
	}
};

int main() {
	Shape cir("CircleA");								// Ÿ�� ���� ���ϱ�
	cir.setTwo(10, 20);									// ����� ������ ����
	cir.AreaOval();

	Shape rec("Rectangular");							// �簢�� ���� ���ϱ�	
	rec.setTwo(10, 20);									// ����, ���� ����
	rec.AreaRect();

	Shape lad("Ladder");								// ��ٸ��� ���� ���ϱ�
	lad.AreaLadder();									// Ŭ���� �ʱ�ȭ ����
	lad.setThree(5, 10, 6);								// ����, ����, �Ʒ��� ����
	lad.AreaLadder();
	
	return 0;
}

