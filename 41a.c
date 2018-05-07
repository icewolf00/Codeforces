#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char a[102] = {0};
	char b[102] = {0};
	scanf("%s", &a);
	scanf("%s", &b);
	int n = strlen(a);
	for(int i = 0; i < n; i ++){
		if(a[i] != b[n-1-i]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}