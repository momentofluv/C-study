#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

	int random, num, mul, i, k, j, a;

	srand(time(NULL));
	random = (rand() % 100) + 1;

	cout << "랜덤한 수: " << random << endl;

	cout << "특정 배수 개수: "; // 몇 개의 배수를 입력받을지 입력을 통해 정한다.
	cin >> a;
	cout << "<특정 배수만 출력하는 프로그램>" << endl;

	for (i = 0; i < a; i++) { // 위에서 지정한 횟수만큼 배수를 입력받는다.

		cout << i << "번째 특정 배수: ";
		cin >> mul; // 특정 배수를 입력받는다.
		cout << "<특정 배수만 출력하는 프로그램>" << endl;
		for (k = 1; k <= random; k++) {
			if (k % mul == 0) // 입력한 수의 배수이면 (나머지가 없으면) 그 수를 출력한다.
				cout << k << ",";
		}
		cout << endl;

		cout << "<특정 배수 제외 출력하는 프로그램>" << endl;
		for (j = 1; j <= random; j++) {
			if (j % mul == 0)
				continue; // 입력한 수의 배수이면 출력 없이 다시 반복문으로 돌아간다.
			else cout << j << ","; // 입력한 수의 배수가 아닐 경우 그 수를 출력한다.
		}
		cout << endl;
	}

	return 0;
}
