// BRK06 
// PROJECT EULER - 1 
// 21/07/2024
#include <stdio.h>
#include <stdlib.h>

int main() {
	int j = 0, i = 0;
	for(i; i<1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			j = j + i;
		}
	}
	printf("%d",j);
	return 0;
}
