/*
**  This file is the core of this program. Solve sudoku! I explain how to solve sudoku in this program.
**  In short, this program try to put 1-9 from up-left to bottom-right and output answer if it reached bottom-right.
**  
**  The below solve func try to assign n(1-9) for map[y][x]. The result is affected by what map[y][x] is.
**  There are 3 branches.
**  
**  	1. map[y][x] equals 0.
**  		1-a. If assign n for map[y][x], it doesn't follow sudoku rules.
**  			it's impossible to assign n.
**  		1-b. If assign n for map[y][x], it follows sudoku rules.
**  			temporary, it's possible to assign n. Go ahead.
**  	2. map[y][x] equals n.
**  		temporary, it's possible to assign n. Go ahead.
**  	3. else.
**  		it's impossible to assign n.
**  
**  If map[y][x] = n is possible answer, assign n for map[y][x] temporarily and try to assign next block.
**  Else, look back and check other possibilities.
**
**
**           Repeatedly work like this and if reaches bottom-right, output the answer.
*/


#include "solver.h"

int solve(char map[9][9], int x, int y, int n){
	int fixed = 1;

	if (map[y][x] == n + '0') // case.2
		fixed = 0;
	else{
		if (map[y][x] != '0') // case.3
			return 0;
		map[y][x] = n + '0';
		if (!checker(map, x, y)){ // case.1-a
			map[y][x] = '0';
			return 0;
		}
	}

	// case.2 & 1-b
	// look the block next to the right.
	// if reach right end, look left end of the next line.
	int next_x = ((x == 8) ? 0 : x+1);
	int next_y = ((x == 8) ? y+1 : y);
	// if it reaches bottom-right, it means map is the ans, so output the ans.
	if (next_x == 0 && next_y == 9)
		output(map);
	else{
		for (int i = 1; i < 10; i++){
			solve(map, next_x, next_y, i);
		}
	}
	// if reached the code block below and flagged,
	// it means you try to assing n for map[y][x] and fail.
	// So initialize map[y][x].
	if (fixed)
		map[y][x] = '0';
	return 0;
}
