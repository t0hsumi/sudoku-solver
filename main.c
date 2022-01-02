#include "solver.h"

int main(){
	char map[9][9];
	init(map);
	for (int i = 1; i < 10; i++){
		solve(map, 0, 0, i);
	}
}

