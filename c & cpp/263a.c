#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int temp;
	int x,y;
	for(int i = 0; i < 5; i ++){
		for(int j = 0; j < 5; j ++){
			scanf("%d", &temp);
			if(temp == 1){
				x = i, y = j;
			}
		}
	}
	printf("%d\n", abs(x-2)+abs(y-2));
	return 0;
}