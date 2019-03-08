#include <stdio.h>
#include <string.h>
int main(void){
	int n = 0;
	scanf("%d", &n);
	char temp[128] = {0};
	int length = 0;
	for(int i = 0; i < n; i ++){
		scanf("%s", &temp);
		length = strlen(temp);
		if(length > 10){
			printf("%c%d%c\n", temp[0], length-2, temp[length-1]);
		}
		else{
			printf("%s\n", &temp);
		}
	}
}