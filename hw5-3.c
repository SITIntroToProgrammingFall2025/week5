#include <stdio.h>

int main(void)
{
	int i, n ;
	 printf("Please enter two different numbers");
	scanf("%d", &i);
	scanf("%d", &n);
                while ( n == i){
		printf ("Same, pleaase enter two different numbers\n");
	scanf("%d", &i);
	scanf("%d", &n);
	}
	if (n != i) {
		printf("You entered %d %d\n", i, n);
}
	return 0;
}


