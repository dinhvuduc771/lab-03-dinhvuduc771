/*
4. Write a function to check whether a given array is sorted or not.
Return 1 if sorted increasing, -1: decreasing, 0: not sorted
Ex:
______________________________________
| Input: 8 7 9 2 1 5 2               |
| Output: 0                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int Ex4(int arr[], int n){
	//your codes here
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=1; i<=argc;i++){
		testcase[i-1] = atoi(argv[i]);
	}
	
	printf("%d", Ex4(testcase, argc));

	return 0;
}