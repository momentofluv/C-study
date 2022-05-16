#include <iostream>
using namespace std;

class Box {
private:
	char ch;				// 사각형을 채울 문자
	int width;				// 사각형의 가로
	int height;				// 세로
	int i = 0;				// for문에서 사용될 예정
	int j = 0;


public:
	Box(int w, int h);		// 생성자 호출 시 가로/세로 길이 입력
	void setFil(char f);	
	void setSize(int w, int h);
	void draw();
};

Box::Box(int w, int h) {
	width = w;				
	height = h;
	ch = '*';
}
void Box::setFil(char f) {	// 원하는 문자로 사각형을 채우기 위해 문자를 변경함
	ch = f;
}
void Box::setSize(int w, int h) {		// 사각형의 가로/세로 길이 재지정
	width = w;
	height = h;
}
void Box::draw() {						// 사각형 그리기
	for (i = 0; i < height; i++) {		
		for (j = 0; j < width; j++) {
			cout << ch;					// 가로 길이만큼 입력 후 줄 변경
		}
		cout << endl;
	}
}

int main() {
	Box box1(3, 4);						// 3*4 사이즈의 사각형 설정
	box1.draw();						// 그리기
	cout << endl;
	box1.setFil('^');					// 사각형 채울 문자 변경
	box1.setSize(6, 10);				// 6*10 사이즈로 사각형 크기 변경
	box1.draw();

	return 0;
}



