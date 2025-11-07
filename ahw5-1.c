#include <stdio.h>

int main(void)
{
	int m, n, steps ;
	steps = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	while (n < m) {
		if (n * 2 <= m) {
		n = n * 2;
		} else {
		n = n + 1;
		}
		steps = steps + 1;
		}
	printf("Numbers of steps taken: %d", steps);
	if (n > m) {
	printf("Cannot transform %n to %m", n, m);
	}
return 0;
}






