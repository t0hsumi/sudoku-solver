#include "solver.h"

void init(char map[9][9], int *check){
	rep(i, 9) rep(j, 9){
		char input;
		do{
			scanf("%c", &input);
		} while (input < '0' || input > '9');
		if (input == '0') *check = 0;
		map[i][j] = input;
	}
}
