/*[���׸� 1]: ���� ����

��ǻ�����α׷��� �򰡰��� (���� 25��)
�а�:��ǻ�Ͱ��к�
�й�:202201780
�̸�:������

��������: ������ �ڷγ� Ȯ���� ��Ȳ

*/

#include <stdio.h>
#include "city.c" //[���׸� 8] : ���� �ҽ� ���� ���

void print_stars() { //[���׸� 2] : �Լ� ���
	for (int i = 0; i < 40; i++)
	printf("*");
}

int main(void) {
	int total_count = 0;

	struct city seoul = { "����", 0 }; //[���׸� 5] : ����ü ���
	struct city busan = { "�λ�", 0 };
	struct city daegu = { "�뱸", 0 };
	struct city incheon = { "��õ", 0 };
	struct city gwangju = { "����", 0 };
	struct city daejeon = { "����", 0 };
	struct city ulsan = { "���", 0 };
	struct city jeju = { "����", 0 };
	struct city cities[] = { seoul, busan, daegu, incheon, gwangju, daejeon, ulsan, jeju }; //[���׸� 3] : �迭 ���

	struct city* pointer; //[���׸� 4] : ������ ���
	pointer = &cities;

	int i;
	                         

	for (i = 0; i < 8; i++) {
		int count = 0;
		printf("%s ������ Ȯ���� ���� �Է��Ͻÿ�: ", (pointer+i)->name); //[���׸� 6] : ������ Ȱ�� // [���׸� 7] : ���� �����
		scanf_s("%d", &count);
		cities[i].covid_count = count;
	}

	for (i = 0; i < 8; i++) {
		total_count += (pointer+i)->covid_count; //[���׸� 6] : ������ Ȱ��
	}
	print_stars(); //[���׸� 2] : �Լ� ���
	printf("\n���� �� Ȯ���� ���� %d���Դϴ�.\n", total_count);
	print_stars();

	return 0;
}