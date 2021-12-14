#include "solver.h"

int main(){
	char map[9][9];
	init(map);
	printf("%d\n", solve(map, 0, 0));
	output(map);
}

