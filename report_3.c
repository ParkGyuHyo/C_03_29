#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*  �ð��� �Է��ϸ� �ú��� ������ �����Ͽ� ����ϴ� �Լ� time_division�� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.
	���� ��� time_division("13:7:25") �Ǵ� time_division("130725")�� ����� "���� 1�� 7�� 25��"�� ����մϴ�.
*/ 

void time_division(char *str); 

int main(void) {
	char in_time[50];
	
	printf("�ð��� �Է����ּ���.(ex 13:7:25 or 130725): ");
	scanf("%s", in_time);
	
	time_division(in_time);
	
	return 0;	
}

void time_division(char *str) {
	int hour, min, sec;
	char time[50];
	
	if(strchr(str, ':')) { // ���� ���ڿ��� : �� ������ ��� 
		if (str[4] == ':') { // ���� ���ڸ� �� ������ �Ǵ� 
			memmove(time, str, 2); // �ð��� ������ 
			memmove(time+2, "0", 1); // �ð� �ڿ� 0�� ���� 
			memmove(time+3, str+3, 1); // ���� ������ 
			memmove(time+4, str+5, 3); // �ʿ� Null ���ڸ� ������ 
		} else {
			memmove(time, str, 2); // �ð��� ������ 
			memmove(time+2, str+3, 2); // ���� ������ 
			memmove(time+4, str+6, 3); // �ʿ� Null ���ڸ� ������ 
		}
	} else {
		memmove(time, str, 2); // �ð��� ������ 
		memmove(time+2, str+2, 2); // ���� ������ 
		memmove(time+4, str+4, 3); // �ʿ� Null ���ڸ� ������
	}
	hour = atoi(time) / 10000;
	min = atoi(time) % 10000 / 100;
	sec = atoi(time) % 100;
	
	if (hour > 23 || min > 59 || sec > 59) {
		printf("���ڿ��� �߸� �Է��ϼ̽��ϴ�.");
		return 1;
	}
	
	if (hour > 12) {
		printf("���� %d�� %d�� %d�� �Դϴ�.", hour-12, min, sec);
	}else{
		printf("����  %d�� %d�� %d�� �Դϴ�.", hour, min, sec);
	}
}
