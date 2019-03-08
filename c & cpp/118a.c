#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	for(int i = 0; i < n; i ++){
		lala[i] = tolower(lala[i]);
	}
	for(int i = 0; i < n; i ++){
		if(lala[i] == 'a' || lala[i] == 'o' || lala[i] == 'y' || lala[i] == 'e' || lala[i] == 'u' || lala[i] == 'i'){
			continue;
		}
		else{
			printf(".%c", lala[i]);
		}
	}
}