#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char lala[1024] = {0};
	scanf("%s", &lala);
	lala[0] = toupper(lala[0]);
	printf("%s", lala);
}