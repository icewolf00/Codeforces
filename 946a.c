#include <stdio.h>
int main(void){
	int n = 0;
	scanf("%d", &n);
	int temp = 0;
	int ans = 0;
	for(int i = 0; i < n; i ++){
		scanf("%d", &temp);
		if(temp > 0){
			ans += temp;
		}
		else if(temp < 0){
			ans -= temp;
		}
	}
	printf("%d", ans);
}