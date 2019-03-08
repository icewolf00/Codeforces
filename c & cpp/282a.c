#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int n;
	scanf("%d", &n);
	int x = 0;
	char temp[8];
	for(int i = 0; i < n; i ++){
		scanf("%s", &temp);
		if(strcmp(temp, "++X") == 0 || strcmp(temp, "X++") == 0){
			x += 1;
		}
		else if(strcmp(temp, "--X") == 0 || strcmp(temp, "X--") == 0){
			x -= 1;
		}
	}
	printf("%d\n", x);
}