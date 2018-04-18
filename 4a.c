#include <stdio.h>
int main(void){
	int w = 0;
	scanf("%d", &w);
	int flag = 0;
	for(int i = 2; i <= w-2 ; i+=2){
		if((w-i)%2==0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}