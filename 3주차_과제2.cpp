#include <iostream>
using namespace std;

int total_money = 0;						// 전역변수 total_money
	
int total(int* array) {						// 지역변수 array를 포인터 변수로 선언, 후에 투입될 배열 인자의 주소값 저장하게 됨.
	int i;
	for (i = 0; i < 4; i++) {
		total_money += array[i];
	}
	return total_money;
}

void myaccounts(int* array, int length) {	// 지역변수 array를 포인터 변수로 선언, 후에 투입될 배열 인자의 주소값 저장하게 됨.
											// 배열의 함수에 전달될 때 포인터로 변환되므로 길이를 별도의 매개변수로 받아야 한다.

	int j;

	for (j = 0; j < length; j++) {
		cout << "\t" << array[j] << "\t |";
	}
}


int main() {
;
	int bank[4] = { 5000,4000,0,10 };
	string bank_name[4] = { "하나","우리","신한", "국민" };
	total(bank);							// total 함수 실행, int * array = bank (배열의 포인터이므로 등호 우측에 &bank[0] 또는 bank 와야 함)

	cout << "*************** SWING 자산관리 서비스 ***************" << endl;
	cout << "----------------- 은행 별 계좌 정보 -----------------" << endl;

	int j;

	for (j = 0; j < 4; j++) {				// 은행의 이름 출력
		cout << "\t" << bank_name[j] << "\t |";
	}
	cout << endl;
	myaccounts(bank, 4);					// 배열의 포인터 변수를 선언할 때 배열의 이름 자체를 통해 선언할 수 있다. 
	cout << endl;

	cout << "-----------------------------------------------------" << endl;
	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "*****************************************************" << endl;

	return 0;
}
