#include <iostream>
int main() {
	using namespace std; //cout, cin 앞에서 std:: 생략

	char name[12]; // 이름 입력받을 변수 선언, 5글자까지 입력 가능
	cout << "당신의 이름은 무엇입니까? ";
	cin.getline(name, 12, '\n'); // 성과 이름 사이에 공백 필요하므로 cin 대신 사용
	cout << "반갑습니다." << name << "님" << endl << endl; // name으로 입력받은 이름 표시

	cout << "----------SWING 30----------" << endl;
	cout << "음료의 가격 입력을 시작합니다." << endl << endl ;

	int coke, water, fanta, amount_coke, amount_water, amount_fanta, total; // 입력받을 변수 선언
	cout << "콜라의 가격 : ";
	cin >> coke; // 콜라 가격 입력받음
	cout << "삼다수의 가격 : ";
	cin >> water; // 삼다수 가격 입력받음
	cout << "환타의 가격 : "; // 환타 가격 입력받음
	cin >> fanta;

	cout << endl;

	cout << "개수를 입력해주세요." << endl << endl; 
	cout << "콜라 수량 : "; // 콜라 수량 입력받음
	cin >> amount_coke;
	cout << "삼다수 수량 : "; // 삼다수 수량 입력받음
	cin >> amount_water;
	cout << "환타 수량 : "; // 환타 수량 입력받음
	cin >> amount_fanta;

	cout << "----------------------------" << endl;
	total = (coke * amount_coke + water * amount_water + fanta * amount_fanta) - 500;
	/* 최종 가격은 각 음료의 가격에 음료의 수량을 곱한 값이다. 그러나 500원을 할인해주려고 하므로
	마지막에 출력할 total 값에서 미리 500원을 제외했다. */
	cout << "500원을 할인받아 총 " << total << "원 입니다." << endl;

	return 0;
}
