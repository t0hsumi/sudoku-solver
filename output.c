#include "solver.h"

void output(char map[9][9]){
	rep(i, 9) rep(j, 9){
		printf("%c", map[i][j]);
		if (j == 8) printf("\n");
		else printf(" ");
	}
	exit(0);
}
