#include "solver.h"

int solve(char map[9][9], int x, int y, int n){
	int fixed = 0;

	if (map[y][x] == n + '0')
		fixed = 1;
	else{
		if (map[y][x] != '0')
			return 0;
		map[y][x] = n + '0';
		if (!checker(map, x, y)){
			map[y][x] = '0';
			return 0;
		}
	}

	int next_x = ((x == 8) ? 0 : x+1);
	int next_y = ((x == 8) ? y+1 : y);
	if (next_x == 0 && next_y == 9)
		output(map);
	else{
		for (int i = 1; i < 10; i++){
			solve(map, next_x, next_y, i);
		}
	}
	if (fixed == 0)
		map[x][y] = '0';
	return 1;
}
