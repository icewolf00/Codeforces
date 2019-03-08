#include <stdio.h>

int main(void){
	int n, k;
	scanf("%d%d", &n, &k);
	int place = 1;
	int last = 0;
	int count = 0;
	int threshold = 0;
	int score[52] = {0};
	for(int i = 0; i < n; i ++){
		scanf("%d", &score[i]);
		if(i == k-1){
			threshold = score[i];
		}
	}
	for(int i = 0; i < n; i ++){
		if(score[i] >= threshold && score[i] != 0){
			count ++;
		}
	}
	printf("%d\n", count);
}