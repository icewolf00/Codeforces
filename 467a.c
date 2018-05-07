#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	int p,q;
	int ans = 0;
	for(int i = 0; i < n; i ++){
		scanf("%d%d", &p,&q);
		if(q-p >= 2){
			ans ++;
		}
	}
	printf("%d\n", ans);
	return 0;
}