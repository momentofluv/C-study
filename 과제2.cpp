#include <iostream>
using namespace std;

class Shape{
private:
	string NAME;		// 타원, 사각형, 사다리꼴 어떤 도형의 넓이를 구할 것인지 표시
	int A;				// 가로
	int B;				// 세로
	int C;				// 가로2 (사다리꼴 계산에서만 사용)
	double value;

public:
	Shape(string s) { NAME = s; A = 0; B = 0; value = 0; }		// 생성자 선언
	~Shape() { cout << "Shape 소멸 " << NAME << " 클래스" << endl; }	// 소멸자 선언, 프로그램이 마무리될 때 생성자 실행 역순으로 출력됨
	void setTwo(int a, int b) { A = a; B = b; }		// 가로, 세로값 투입
	void setThree(int a, int b, int c) { A = a; B = b; C = c; }		// 사다리꼴 가로, 세로값 투입
	void AreaOval() {										// 타원의 넓이 구하는 함수
		value = ((double)A / 2) * ((double)B / 2) * 3.14;
		cout << "타원의 넓이는 " << value << "이다." << endl;
	}
	void AreaLadder() {										// 사다리꼴의 넓이 구하는 함수
		value = (A + C) * B / 2;
		cout << "사다리꼴의 넓이는 " << value << "이다." << endl;
	}
	void AreaRect() {										// 사각형의 넓이 구하는 함수
		value = A * B;
		cout << "사각형의 넓이는 " << value << "이다." << endl;
	}
};

int main() {
	Shape cir("CircleA");								// 타원 넓이 구하기
	cir.setTwo(10, 20);									// 단축과 장축의 길이
	cir.AreaOval();

	Shape rec("Rectangular");							// 사각형 넓이 구하기	
	rec.setTwo(10, 20);									// 가로, 세로 길이
	rec.AreaRect();

	Shape lad("Ladder");								// 사다리꼴 넓이 구하기
	lad.AreaLadder();									// 클래스 초기화 이전
	lad.setThree(5, 10, 6);								// 윗변, 높이, 아랫변 길이
	lad.AreaLadder();
	
	return 0;
}

