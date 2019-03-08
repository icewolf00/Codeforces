#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int lucky[13] = {4,7,44,47,77,444,447,474,477,744,747,774,777};

int main(void){
	int n;
	scanf("%d", &n);
	int flag = 0;
	for(int i = 0; i < 13; i ++){
		if(n == lucky[i] || n % lucky[i] == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}