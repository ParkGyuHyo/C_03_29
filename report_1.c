#include<stdio.h>
#include<ctype.h>
#include<string.h>

void upper_and_lower(char strs[]){
	int i;
	
	for(i=0; i<strlen(strs); i++){
		if (strs[i] >= 65 && strs[i] <= 90)
		{
			strs[i] = tolower(strs[i]);
		}else if (strs[i] >= 97 && strs[i] <= 122){
			strs[i] = toupper(strs[i]);
		}
	}
}

int main(void){
	char str[10] = "aBcDeFgHiJ";
	upper_and_lower(str);
	printf("%s\n", str);
	
	return 0;
}
