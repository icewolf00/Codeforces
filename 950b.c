#include <stdio.h>

int main(void){
	int Y_num, X_num;
	scanf("%d%d", &X_num, &Y_num);
	int X[100000] = {0};
	int Y[100000] = {0};
	for(int i = 0; i < X_num; i ++){
		scanf("%d", &X[i]);
	}
	for(int i = 0; i < Y_num; i ++){
		scanf("%d", &Y[i]);
	}
	int X_value = X[0];
	int Y_value = Y[0];
	int count = 0;
	for(int i = 0, j = 0; i < X_num, j < Y_num; i++, j ++){
		if(X_value == Y_value){
			count += 1;
			X_value = X[i+1];
			Y_value = Y[j+1];
		}
		else if(X_value > Y_value){
			Y_value += Y[j+1];
			i -= 1;
		}
		else if(Y_value > X_value){
			X_value += X[i+1];
			j -= 1;
		}
	}
	printf("%d", count);
}