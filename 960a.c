#include <stdio.h>
#include <string.h>

int main(void){
	char lala[5012] = {0};
	scanf("%s", &lala);
	int count_a = 0;
	int count_b = 0;
	int count_c = 0;
	int flag_a = 0;
	int flag_b = 0;
	int flag_c = 0;
	for(int i = 0; i < strlen(lala); i ++){
		if(lala[i] == 'a'){
			if(flag_b != 0 || flag_c != 0){
				printf("NO\n");
				return 0;
			}
			flag_a = 1;
			count_a += 1;
		}
		if(lala[i] == 'b'){
			if(flag_a == 0 || flag_c != 0){
				printf("NO\n");
				return 0;
			}
			flag_b = 1;
			count_b += 1;
		}
		if(lala[i] == 'c'){
			if(flag_a == 0 || flag_b == 0){
				printf("NO\n");
				return 0;
			}
			flag_c = 1;
			count_c += 1;
		}
	}
	if(count_a > 0 && count_b > 0 && (count_a == count_c || count_b == count_c)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}