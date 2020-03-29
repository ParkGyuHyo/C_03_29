#include<stdio.h>
#include<math.h>

void birthday(int birth);

int main(void) {
	int inbirth;
	
	printf("�ֹε�Ϲ�ȣ �� 6�ڸ��� �Է����ּ���.: ");
	scanf("%d", &inbirth);
	
	birthday(inbirth);
	
	return 0;
} 

void birthday(int birth) {
	int year = birth / 10000;
	int month = birth % 10000 / 100;
	int day = birth % 100;

	if(year > 20) {
		printf("19%d�� %d�� %d��", year, month, day);
	}
	
	else if(year > 0 && year < 10 || year == 0) {
		printf("200%d�� %d�� %d��", year, month, day);
	}
	
	else if(year > 10 && year < 21) {
		printf("20%d�� %d�� %d��", year, month, day);
	}
}
