#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

	int random, num, mul, i, k, j, a;

	srand(time(NULL));
	random = (rand() % 100) + 1;

	cout << "������ ��: " << random << endl;

	cout << "Ư�� ��� ����: "; // �� ���� ����� �Է¹����� �Է��� ���� ���Ѵ�.
	cin >> a;
	cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;

	for (i = 0; i < a; i++) { // ������ ������ Ƚ����ŭ ����� �Է¹޴´�.

		cout << i << "��° Ư�� ���: ";
		cin >> mul; // Ư�� ����� �Է¹޴´�.
		cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
		for (k = 1; k <= random; k++) {
			if (k % mul == 0) // �Է��� ���� ����̸� (�������� ������) �� ���� ����Ѵ�.
				cout << k << ",";
		}
		cout << endl;

		cout << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= random; j++) {
			if (j % mul == 0)
				continue; // �Է��� ���� ����̸� ��� ���� �ٽ� �ݺ������� ���ư���.
			else cout << j << ","; // �Է��� ���� ����� �ƴ� ��� �� ���� ����Ѵ�.
		}
		cout << endl;
	}

	return 0;
}
