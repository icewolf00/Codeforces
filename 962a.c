#include <stdio.h>

int main(void){
	int n;
	int lala[200002] = {0};
	scanf("%d", &n);
	int counter = 0;
	for(int i = 0; i < n; i ++){
		scanf("%d", &(lala[i]));
		counter += lala[i];
	}
	int temp = 0;
	for(int i = 0; i < n; i ++){
		temp += lala[i];
		if(counter % 2 == 0){
			if(temp >= (counter/2)){
				printf("%d\n", i+1);
				break;
			}
		}
		else{
			if(temp >= (counter/2 + 1)){
				printf("%d\n", i+1);
				break;
			}
		}
	}
	return 0;
}