#include <iostream>
using namespace std;

int total_money = 0;						// �������� total_money
	
int total(int* array) {						// �������� array�� ������ ������ ����, �Ŀ� ���Ե� �迭 ������ �ּҰ� �����ϰ� ��.
	int i;
	for (i = 0; i < 4; i++) {
		total_money += array[i];
	}
	return total_money;
}

void myaccounts(int* array, int length) {	// �������� array�� ������ ������ ����, �Ŀ� ���Ե� �迭 ������ �ּҰ� �����ϰ� ��.
											// �迭�� �Լ��� ���޵� �� �����ͷ� ��ȯ�ǹǷ� ���̸� ������ �Ű������� �޾ƾ� �Ѵ�.

	int j;

	for (j = 0; j < length; j++) {
		cout << "\t" << array[j] << "\t |";
	}
}


int main() {
;
	int bank[4] = { 5000,4000,0,10 };
	string bank_name[4] = { "�ϳ�","�츮","����", "����" };
	total(bank);							// total �Լ� ����, int * array = bank (�迭�� �������̹Ƿ� ��ȣ ������ &bank[0] �Ǵ� bank �;� ��)

	cout << "*************** SWING �ڻ���� ���� ***************" << endl;
	cout << "----------------- ���� �� ���� ���� -----------------" << endl;

	int j;

	for (j = 0; j < 4; j++) {				// ������ �̸� ���
		cout << "\t" << bank_name[j] << "\t |";
	}
	cout << endl;
	myaccounts(bank, 4);					// �迭�� ������ ������ ������ �� �迭�� �̸� ��ü�� ���� ������ �� �ִ�. 
	cout << endl;

	cout << "-----------------------------------------------------" << endl;
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << "�� �Դϴ�." << endl;
	cout << "*****************************************************" << endl;

	return 0;
}