/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
______________________________________
| Input: 2 5 3 4 8 9 7 6 10          |
| Output: 3 4 8 or 9 7 6             |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

void Ex3(int in_arr[], int n){
	//your codes here
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=1; i<=argc;i++){
		testcase[i-1] = atoi(argv[i]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
