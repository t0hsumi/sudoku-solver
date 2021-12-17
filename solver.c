#include "solver.h"

int solve(char map[9][9], int x, int y, int n){
	int res;

	if (x == 0 && y == 9){
		output(map);
		return 0;
	}
	if (map[y][x] >= '1' && map[y][x] <= '9'){
		if (x == 8){
			for (int i = 1; i < 10; i++)
				solve(map, 0, y+1, i);
			/* if (solve(map, 0, y+1)) */
			/* 	res = 1; */
		}
		else{
			for (int i = 1; i < 10; i++)
				solve(map, x+1, y, i);
			/* if (solve(map, x+1, y)) */
			/* 	res = 1; */
		}
	}
	else{
		for (int tmp = 1; tmp < 10; tmp++){
			map[y][x] = tmp;
			if (checker(map, x, y)){
				if (x == 8){
					for (int i = 1; i < 10; i++)
						solve(map, 0, y+1, i);
					/* if (solve(map, 0, y+1)) */
					/* 	res = 1; */
				}
				else{
					for (int i = 1; i < 10; i++)
						solve(map, x+1, y, i);
					/* if (solve(map, x+1, y)) */
					/* 	res = 1; */
				}
			}
		}
		map[y][x] = 0;
		res = 0;
	}
	return res;
}
