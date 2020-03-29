#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>

void Alam(long times);

int main(void) {
	char time[50];
	int intime;
	
	printf("알람을 울릴 시간을 \"n분\" 또는 \"n초\" 형식으로 입력해주세요.: ");
	scanf("%s", time);
	
	if (strstr(time, "분")){
		intime = atoi(time) * 60000;
	}else if (strstr(time, "초")){
		intime = atoi(time) * 1000;
	}else{
		printf("시간이 잘못 입력 되었습니다.");
		return 1;
	}
	
	Alam(intime);
	
	return 0;
}

void Alam(long times) {
	Sleep(times);
	printf("\a");
}
