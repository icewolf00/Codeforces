#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int n, temp;
	int count = 0;
	int ans = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i ++){
		count = 0;
		for(int i = 0; i < 3; i ++){
			scanf("%d", &temp);
			if(temp == 1){
				count ++;
			}
		}
		if(count >= 2){
			ans ++;
		}
	}
	printf("%d\n", ans);
}