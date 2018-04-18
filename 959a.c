#include <stdio.h>
int main(void){
	long int n;
	scanf("%ld", &n);
	int flag = 0;
	while(n != 0){
		if(flag == 0){
			if(n >= 2){
				if(n % 2 == 0){
					printf("Mahmoud\n");
					return 0;
				}
				else{
					n = 1;
				}
			}
			else{
				printf("Ehab\n");
				return 0;
			}
			flag = 1;
		}
		if(flag == 1){
			if(n >= 1){
				if(n % 2 == 1){
					printf("Ehab\n");
					return 0;
				}
				else{
					n = 1;
				}
			}
			flag = 0;
		}
	}
}