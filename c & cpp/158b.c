#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	int temp;
	int ans = 0;
	int count[5] = {0};
	for (int i = 0; i < n; i++){
		scanf("%d", &temp);
		count[temp] ++;
	}
	ans += count[4] + count[3] + count[2]/2;
	count[1] -= count[3];
	if(count[2] % 2 == 1){
		ans ++;
		count[1] -= 2;
	}
	if(count[1] > 0){
		if(count[1] % 4 != 0){
			ans += count[1]/4 + 1;
		}
		else{
			ans += count[1]/4;
		}
	}
	printf("%d\n", ans);
	return 0;
}