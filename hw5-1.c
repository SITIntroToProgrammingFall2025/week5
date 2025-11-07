#include <stdio.h>

int main(void)
{
	int i, max, n ;
        i = 1;
                printf("max? ");
        scanf("%d", &max);
	while( i<=max ) {
		printf("%d\n", i);
		i = i * 2;
	}
	return 0;
}


