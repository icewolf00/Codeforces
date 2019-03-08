#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	char lala[52] = {0};
	scanf("%s", &lala);
	int ans = 0;
	for(int i = 1; i < n; i ++){
		if(lala[i] == lala[i-1]){
			ans ++;
		}
	}
	printf("%d\n", ans);
}