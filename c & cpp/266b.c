#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int n,t;
	char s[56] = {0};
	scanf("%d%d", &n,&t);
	scanf("%s", s);
	for(int i = 0; i < t; i ++){
		for(int j = 0; j < n-1; j ++){
			if(s[j] == 'B' && s[j+1] == 'G'){
				s[j] = 'G';
				s[j+1] = 'B';
				j ++;
			}
		}
	}
	printf("%s\n", s);
}