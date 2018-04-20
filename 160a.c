#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int main(void){
	int n;
	scanf("%d", &n);
	int array[102] = {0};
	int sum = 0;
	for(int i = 0; i < n; i ++){
		scanf("%d", &array[i]);
		sum += array[i];
	}
	qsort(array, n, sizeof(array[0]), cmp);
	int temp = 0;
	int ans = 0;
	int threshold = sum / 2;
	while(temp <= threshold){
		temp += array[ans++];
	}
	printf("%d\n", ans);
	return 0;
}