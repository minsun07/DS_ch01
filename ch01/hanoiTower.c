#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) {  //a�� ����� ����, b��  ������ ����, c�� ������ ����
	if (n == 1) {
		printf("���� %d, %c -> %c\n", n, a, c);  //n�� ������ ��ȣ
	}
	else {
		HanoiTower(n - 1, a, c, b);
		printf("���� %d, %c -> %c\n", n, a, c); //n�� ������ ��ȣ
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 4; //������ ����
	HanoiTower(n, 'A', 'B', 'C');  //'A'�� �����, 'B'�� ������, 'C'�� ������
	return 0;
}