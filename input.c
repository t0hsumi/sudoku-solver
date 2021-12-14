#include "solver.h"

void init(char map[9][9]){
	rep(i, 9) rep(j, 9){
		char input;
		do{
			scanf("%c", &input);
		} while (input < '0' || input > '9');
		map[i][j] = input;
	}
}
