#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>

void Alam(long times);

int main(void) {
	char time[50];
	int intime;
	
	printf("�˶��� �︱ �ð��� \"n��\" �Ǵ� \"n��\" �������� �Է����ּ���.: ");
	scanf("%s", time);
	
	if (strstr(time, "��")){
		intime = atoi(time) * 60000;
	}else if (strstr(time, "��")){
		intime = atoi(time) * 1000;
	}else{
		printf("�ð��� �߸� �Է� �Ǿ����ϴ�.");
		return 1;
	}
	
	Alam(intime);
	
	return 0;
}

void Alam(long times) {
	Sleep(times);
	printf("\a");
}
