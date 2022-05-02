#include <iostream>
using namespace std;

int main(void) {

	int seat[3][10] = { };
	int a, i, j, width, length; // width=가로, length=세로

	while (1) {
		cout << "좌석을 예약하시겠습니까? (0이나 1 선택): ";
		cin >> a;

		if (a == 1) {
			cout << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "--------------------" << endl;
			for (i = 0; i < 3; i++) {				// 배열 출력
				for (j = 0; j < 10; j++) {
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}
			cout << "몇열, 몇번째 좌석을 예약하시겠습니까? " << endl;
			cin >> length >> width;
			if (seat[length-1][width-1] == 0) {	//배열의 인덱스는 0부터 시작하므로 각각 1씩 빼준다.
				cout << "예약되었습니다." << endl;
				seat[length-1][width-1] = 1; // 예약된 자리를 1로 바꿔준다.
			}

			else cout << "이미 예약된 자리입니다." << endl; // 해당 자리의 수가 0이 아닌 1일 경우 이미 예약된 자리임
		}


		else {							// a가 0이면 좌석을 예약하지 않음
			cout << "좌석 예약 종료";
			break;						// 반복문 while이 무한반복되므로 좌석 예약하지 않을 시 반복문 탈출
		}
	}
	return 0;
}
