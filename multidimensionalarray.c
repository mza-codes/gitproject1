/*
 ============================================================================
 Name        : multidimensional.c
 Author      : MZA
 Version     :
 Copyright   : M.Corp
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,s;
	printf("Enter array size");
	scanf("%d",&s);
	printf("Enter 16 Values");
	int multi[s][s];
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			scanf("%d",&multi[i][j]);
		}
	}
	printf("MultiDimensional Array:\n");
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
		printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
