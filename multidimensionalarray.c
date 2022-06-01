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
	int multi[4][4],i,j;
	printf("Enter 16 Values");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&multi[i][j]);
		}
	}
	printf("MultiDimensional Array:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
