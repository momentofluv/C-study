#include <iostream>
using namespace std;

int main(void) {

	int seat[3][10] = { };
	int a, i, j, width, length; // width=����, length=����

	while (1) {
		cout << "�¼��� �����Ͻðڽ��ϱ�? (0�̳� 1 ����): ";
		cin >> a;

		if (a == 1) {
			cout << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "--------------------" << endl;
			for (i = 0; i < 3; i++) {				// �迭 ���
				for (j = 0; j < 10; j++) {
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}
			cout << "�, ���° �¼��� �����Ͻðڽ��ϱ�? " << endl;
			cin >> length >> width;
			if (seat[length-1][width-1] == 0) {	//�迭�� �ε����� 0���� �����ϹǷ� ���� 1�� ���ش�.
				cout << "����Ǿ����ϴ�." << endl;
				seat[length-1][width-1] = 1; // ����� �ڸ��� 1�� �ٲ��ش�.
			}

			else cout << "�̹� ����� �ڸ��Դϴ�." << endl; // �ش� �ڸ��� ���� 0�� �ƴ� 1�� ��� �̹� ����� �ڸ���
		}


		else {							// a�� 0�̸� �¼��� �������� ����
			cout << "�¼� ���� ����";
			break;						// �ݺ��� while�� ���ѹݺ��ǹǷ� �¼� �������� ���� �� �ݺ��� Ż��
		}
	}
	return 0;
}