#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(void){
	int n,m;
	scanf("%d%d", &n,&m);
	int f[56] = {0};
	for(int i = 0; i < m; i ++){
		scanf("%d", &f[i]);
	}
	qsort(f, m, sizeof(f[0]), cmp);
	int ans = f[n-1] - f[0];
	for(int i = 1; i <= m-n; i ++){
		if(f[i+n-1] - f[i] < ans){
			ans = f[i+n-1] - f[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}