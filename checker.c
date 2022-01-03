/*
** These func check whether map follows rule that each row, colmun and 3x3 section contains all of the digits between 1-9.
*/

#include "solver.h"

// check y-th row(-) line
static int row(char map[9][9], int y){
	int res = 1;
	int count[10];

	rep(i, 10) count[i] = 0;
	rep(i, 9) count[map[y][i] - '0']++;
	for (int i = 1; i < 10; i++){
		if (count[i] > 1) res = 0;
	}
	return res;
}

// check x-th col(|) line
static int col(char map[9][9], int x){
	int res = 1;
	int count[10];

	rep(i, 10) count[i] = 0;
	rep(i, 9) count[map[i][x] - '0']++;
	for (int i = 1; i < 10; i++){
		if (count[i] > 1) res = 0;
	}
	return res;
}

// check the 3x3 section
static int block(char map[9][9], int x, int y){
	int res = 1;
	int count[10];

	rep(i, 10) count[i] = 0;
	for (int i = (y/3)*3; i < (y/3+1)*3; i++){
		for (int j = (x/3)*3; j < (x/3+1)*3; j++){
			count[map[i][j] - '0']++;
		}
	}
	for (int i = 1; i < 10; i++){
		if (count[i] > 1) res = 0;
	}
	return res;
}

// If all check are passed, return 1.
// Else, return 0.
int checker(char map[9][9], int x, int y){
	if (row(map, y) && col(map, x) && block(map, x, y))
		return 1;
	else
		return 0;
}
