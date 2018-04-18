#include <stdio.h>

int main(void){
	int maxstep;
	scanf("%d\n", &maxstep);
	char lalala[100] = {0};
	scanf("%s", lalala);
	int discount = 0;
	for(int i = 0; i < maxstep-1; i ++){
		if(lalala[i] != lalala[i+1]){
			discount += 1;
			i += 1;
		}
	}
	printf("%d", maxstep - discount);
}