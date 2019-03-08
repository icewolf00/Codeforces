#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	for(int i = 0; i < n; i ++){
		if(lala[i] == 'H' || lala[i] == 'Q' || lala[i] == '9'){
			printf("YES\n");
			return 0;
		} 
	}
	printf("NO\n");
	return 0;
}