#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*  시간을 입력하면 시분초 단위로 구분하여 출력하는 함수 time_division을 작성하고 테스트하시오.
	예를 들어 time_division("13:7:25") 또는 time_division("130725")의 결과로 "오후 1시 7분 25초"를 출력합니다.
*/ 

void time_division(char *str); 

int main(void) {
	char in_time[50];
	
	printf("시간을 입력해주세요.(ex 13:7:25 or 130725): ");
	scanf("%s", in_time);
	
	time_division(in_time);
	
	return 0;	
}

void time_division(char *str) {
	int hour, min, sec;
	char time[50];
	
	if(strchr(str, ':')) { // 만약 문자열에 : 이 존재할 경우 
		if (str[4] == ':') { // 분이 한자리 수 인지를 판단 
			memmove(time, str, 2); // 시간을 가져옴 
			memmove(time+2, "0", 1); // 시간 뒤에 0을 붙임 
			memmove(time+3, str+3, 1); // 분을 가져옴 
			memmove(time+4, str+5, 3); // 초와 Null 문자를 가져옴 
		} else {
			memmove(time, str, 2); // 시간을 가져옴 
			memmove(time+2, str+3, 2); // 분을 가져옴 
			memmove(time+4, str+6, 3); // 초와 Null 문자를 가져옴 
		}
	} else {
		memmove(time, str, 2); // 시간을 가져옴 
		memmove(time+2, str+2, 2); // 분을 가져옴 
		memmove(time+4, str+4, 3); // 초와 Null 문자를 가져옴
	}
	hour = atoi(time) / 10000;
	min = atoi(time) % 10000 / 100;
	sec = atoi(time) % 100;
	
	if (hour > 23 || min > 59 || sec > 59) {
		printf("문자열을 잘못 입력하셨습니다.");
		return 1;
	}
	
	if (hour > 12) {
		printf("오후 %d시 %d분 %d초 입니다.", hour-12, min, sec);
	}else{
		printf("오전  %d시 %d분 %d초 입니다.", hour, min, sec);
	}
}
