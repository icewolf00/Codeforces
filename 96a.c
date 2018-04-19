#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	char flag;
	int count = 1;
	flag = lala[0];
	for(int i = 1; i < n; i ++){
		if(lala[i] == flag){
			count += 1;
			if(count >= 7){
				printf("YES\n");
				return 0;
			}
		}
		else{
			flag = lala[i];
			count = 1;
		}
	}
	printf("NO\n");
}