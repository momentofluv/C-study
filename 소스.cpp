#include <iostream>
using namespace std;

class Box {
private:
	char ch;				// �簢���� ä�� ����
	int width;				// �簢���� ����
	int height;				// ����
	int i = 0;				// for������ ���� ����
	int j = 0;


public:
	Box(int w, int h);		// ������ ȣ�� �� ����/���� ���� �Է�
	void setFil(char f);	
	void setSize(int w, int h);
	void draw();
};

Box::Box(int w, int h) {
	width = w;				
	height = h;
	ch = '*';
}
void Box::setFil(char f) {	// ���ϴ� ���ڷ� �簢���� ä��� ���� ���ڸ� ������
	ch = f;
}
void Box::setSize(int w, int h) {		// �簢���� ����/���� ���� ������
	width = w;
	height = h;
}
void Box::draw() {						// �簢�� �׸���
	for (i = 0; i < height; i++) {		
		for (j = 0; j < width; j++) {
			cout << ch;					// ���� ���̸�ŭ �Է� �� �� ����
		}
		cout << endl;
	}
}

int main() {
	Box box1(3, 4);						// 3*4 �������� �簢�� ����
	box1.draw();						// �׸���
	cout << endl;
	box1.setFil('^');					// �簢�� ä�� ���� ����
	box1.setSize(6, 10);				// 6*10 ������� �簢�� ũ�� ����
	box1.draw();

	return 0;
}



