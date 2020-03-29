#include<stdio.h>
#include<time.h>

void Seoul(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour;
	min = d->tm_min;
	sec = d->tm_sec;
	
	printf("서울 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void London(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 9;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("런던 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Roma(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 8;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("로마 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Paris(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 8;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("파리 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Bangkok(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 2;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("방콕 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Hongkong(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 1;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("홍콩 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Beizing(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 1;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("베이징 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Dongkyeong(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour;
	min = d->tm_min;
	sec = d->tm_sec;
	
	printf("동경 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Sydney(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour + 2;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour > 24) {
		hour -= 24;
		day++; 
	}
	
	printf("시드니 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Melbourne(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour + 2;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour > 24) {
		hour -= 24;
		day++; 
	}
	
	printf("멜버른 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void LosAngeles(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour + 1;
	min = d->tm_min - 17;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("로스앤젤레스 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

void Newyork(void) {
	int year, month, day, hour, min, sec;
	time_t curr;
	struct tm *d;
	curr = time(NULL);
	d=localtime(&curr);
	
	year = d->tm_year + 1900;
	month = d->tm_mon + 1;
	day = d->tm_mday;
	hour = d->tm_hour - 14;
	min = d->tm_min;
	sec = d->tm_sec;
	
	if (hour <= 0) {
		hour += 24;
		day--; 
	}
	
	printf("뉴욕 현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다. \n", year, month, day, hour, min, sec);	
}

int main(void) {
	Seoul();
	London();
	Roma();
	Paris();
	Bangkok();
	Hongkong();
	Beizing();
	Dongkyeong();
	Sydney();
	Melbourne();
	LosAngeles();
	Newyork();
	
	return 0;
}
