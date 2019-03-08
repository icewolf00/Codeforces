#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	int array[102] = {0};
	int flag = 0;
	for(int i = 0; i < n; i ++){
		if(lala[i] == '+'){
			continue;
		}
		else{
			array[flag] = lala[i] - '0';
			flag ++;
		}
	}
	qsort(array, flag, sizeof(array[0]), cmp);
	for(int i = 0; i < flag-1; i ++){
		printf("%d+", array[i]);
	}
	printf("%d\n", array[flag-1]);
}