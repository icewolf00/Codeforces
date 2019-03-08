#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int k, n, w;
	scanf("%d%d%d", &k,&n,&w);
	int ans = w * k * (w+1) / 2 - n;
	if(ans < 0){
		printf("0\n");
	}
	else{
		printf("%d\n", ans);
	}
	return 0;
}