#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	int x_sum,y_sum,z_sum;
	x_sum = y_sum = z_sum = 0;
	int x,y,z;
	for(int i = 0; i < n; i ++){
		scanf("%d%d%d", &x,&y,&z);
		x_sum += x;
		y_sum += y;
		z_sum += z;
	}
	if(x_sum != 0 || y_sum != 0 || z_sum != 0){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	return 0;
}