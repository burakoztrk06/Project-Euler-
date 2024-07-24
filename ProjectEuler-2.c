// BRK06 
// PROJECT EULER-2
// 24/07/2024
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 1, b = 1, c, d, e = 0;
	while(c < 4000000 && d < 4000000){
		c = a + b;
		a = c;
		d = b + c;
		b = d;
		if(c % 2 == 0){
			e = e + c;
		}
		if(d % 2 == 0){
			e = e + d;
		}
	}
	printf("%d",e);
	return 0;
}
