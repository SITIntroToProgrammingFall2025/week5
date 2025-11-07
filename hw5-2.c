#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, max ;
        i = 1;
        printf("max? ");
        scanf("%d", &max);
	while( i<=max ) {
		if ( max % i == 0) {
			printf("%d\n", i);
	}
	i = i + 1;
	}
	return 0;
}



