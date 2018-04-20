#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	int now = 0;
	int in, out;
	int ans = 0;
	for(int i = 0; i < n; i ++){
		scanf("%d %d", &in, &out);
		now = now - in + out;
		if(now > ans){
			ans = now;
		}
	}
	printf("%d\n", ans);
	return 0;
}