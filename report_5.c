#include <stdio.h>

void money_result(int pay);

int main(void){
	int money;
	
	printf("�ݾ��� �Է����ּ���: ");
	scanf("%d", &money);
	
	money_result(money);
	
	return 0;
}

void money_result(int pay){
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��\n", pay/50000, pay % 50000 / 10000, pay % 10000 / 5000, pay % 5000 / 1000);
	printf("5���: %d��, 1���: %d��, 5�ʿ�: %d��, 1�ʿ�: %d��", pay % 1000 / 500, pay % 500 / 100, pay % 100 / 50, pay % 50 / 10);
}
