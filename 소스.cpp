#include <iostream>
int main() {
	using namespace std; //cout, cin �տ��� std:: ����

	char name[12]; // �̸� �Է¹��� ���� ����, 5���ڱ��� �Է� ����
	cout << "����� �̸��� �����Դϱ�? ";
	cin.getline(name, 12, '\n'); // ���� �̸� ���̿� ���� �ʿ��ϹǷ� cin ��� ���
	cout << "�ݰ����ϴ�." << name << "��" << endl << endl; // name���� �Է¹��� �̸� ǥ��

	cout << "----------SWING 30----------" << endl;
	cout << "������ ���� �Է��� �����մϴ�." << endl << endl ;

	int coke, water, fanta, amount_coke, amount_water, amount_fanta, total; // �Է¹��� ���� ����
	cout << "�ݶ��� ���� : ";
	cin >> coke; // �ݶ� ���� �Է¹���
	cout << "��ټ��� ���� : ";
	cin >> water; // ��ټ� ���� �Է¹���
	cout << "ȯŸ�� ���� : "; // ȯŸ ���� �Է¹���
	cin >> fanta;

	cout << endl;

	cout << "������ �Է����ּ���." << endl << endl; 
	cout << "�ݶ� ���� : "; // �ݶ� ���� �Է¹���
	cin >> amount_coke;
	cout << "��ټ� ���� : "; // ��ټ� ���� �Է¹���
	cin >> amount_water;
	cout << "ȯŸ ���� : "; // ȯŸ ���� �Է¹���
	cin >> amount_fanta;

	cout << "----------------------------" << endl;
	total = (coke * amount_coke + water * amount_water + fanta * amount_fanta) - 500;
	/* ���� ������ �� ������ ���ݿ� ������ ������ ���� ���̴�. �׷��� 500���� �������ַ��� �ϹǷ�
	�������� ����� total ������ �̸� 500���� �����ߴ�. */
	cout << "500���� ���ι޾� �� " << total << "�� �Դϴ�." << endl;

	return 0;
}
