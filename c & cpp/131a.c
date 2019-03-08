#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	int flag = 1;
	if(lala[0] >= 'a' && lala[0] <= 'z'){
		for(int i = 1; i < n; i ++){
			if(lala[i] >= 'a' && lala[i] <= 'z'){
				flag = 0;
				break;
			}
		}
	}
	else if(lala[0] >= 'A' && lala[0] <= 'Z'){
		for(int i = 1; i < n; i ++){
			if(lala[i] >= 'a' && lala[i] <= 'z'){
				flag = 0;
				break;
			}
		}
	}
	if(flag){
		for(int i = 0; i < n; i ++){
			if(lala[i] >= 'a' && lala[i] <= 'z'){
				lala[i] -= ('a' - 'A');
			}
			else{
				lala[i] += ('a' - 'A');
			}
		}
	}
	printf("%s\n", lala);
}