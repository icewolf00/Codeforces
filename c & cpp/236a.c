#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char s[102] = {0};
	scanf("%s", &s);
	int n = strlen(s);
	int array[26] = {0};
	for(int i = 0; i < n; i ++){
		array[s[i] - 'a'] = 1;
	}
	int sum = 0;
	for(int i = 0; i < 26; i++){
		sum += array[i];
	}
	if(sum % 2 == 1){
		printf("IGNORE HIM!\n");
	}
	else{
		printf("CHAT WITH HER!\n");
	}
	return 0;
}