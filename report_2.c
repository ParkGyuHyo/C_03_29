#include<stdio.h>
#include<string.h>
#include<ctype.h>

int alpha=0;
int num=0;
int spec=0;

void strcnt(char strs[]){
	int i;
	for(i=0; i<strlen(strs); i++){
		if (strs[i] >= 65 && strs[i] <= 90 || strs[i] >= 97 && strs[i] <= 122) {
			alpha++;
		}else if (strs[i] >= 48 && strs[i] <= 57) {
			num++;
		}else if (strs[i] >= 33 && strs[i] <= 47 || strs[i] >= 58 && strs[i] <= 64 || strs[i] >= 91 && strs[i] <= 96 || strs[i] >= 123 && strs[i] <= 126) {
			spec++;
		}
	}
}

int main(void){
	char str[10] = "aB12!@c3#d";
	
	strcnt(str);
	
	printf("¾ËÆÄºª °¹¼ö: %d°³\n", alpha);
	printf("¼ıÀÚ °¹¼ö: %d°³\n", num);
	printf("Æ¯¼ö±âÈ£ °¹¼ö: %d°³\n", spec);
	
	return 0;
}
