#include <stdio.h>

void money_result(int pay);

int main(void){
	int money;
	
	printf("금액을 입력해주세요: ");
	scanf("%d", &money);
	
	money_result(money);
	
	return 0;
}

void money_result(int pay){
	printf("5만원: %d장, 1만원: %d장, 5천원: %d장, 1천원: %d장\n", pay/50000, pay % 50000 / 10000, pay % 10000 / 5000, pay % 5000 / 1000);
	printf("5백원: %d개, 1백원: %d개, 5십원: %d개, 1십원: %d개", pay % 1000 / 500, pay % 500 / 100, pay % 100 / 50, pay % 50 / 10);
}
