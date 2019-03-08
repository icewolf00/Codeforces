#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char lala[102] = {0};
	scanf("%s", &lala);
	int n = strlen(lala);
	for(int i = 0; i < n; i ++){
		if(lala[i] == 'h'){
			for(int j = i+1; j < n; j ++){
				if(lala[j] == 'e'){
					for(int k = j+1; k < n; k ++){
						if(lala[k] == 'l'){
							for(int l = k+1; l < n; l ++){
								if(lala[l] == 'l'){
									for(int m = l+1; m < n; m ++){
										if(lala[m] == 'o'){
											printf("YES\n");
											return 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}