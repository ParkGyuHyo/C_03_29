#include <stdio.h>
#include <string.h>

void phone_division(char *phone);

int main(void){
	char number[50];
	
	printf("휴대폰 번호 (-)제외하고 를 입력해주세요: ");
	scanf("%s", number);
	
	phone_division(number);
	
	return 0;
}

void phone_division(char *phone) {
	char num[50];
	
	if (strlen(phone) == 10) {
		memmove(num, phone, 3);
		memmove(num+3, "-", 1);
		memmove(num+4, phone+3, 3);
		memmove(num+7, "-", 1);
		memmove(num+8, phone+6, 5);
	}
	
	else if (strlen(phone) == 11) {
		memmove(num, phone, 3);
		memmove(num+3, "-", 1);
		memmove(num+4, phone+3, 4);
		memmove(num+8, "-", 1);
		memmove(num+9, phone+7, 5);
	}
	
	else {
		printf("전화번호를 잘못 입력하셨습니다.");
		return 1;
	}
}
