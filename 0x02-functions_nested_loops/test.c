#include <stdio.h>

int main(void)
{
	int r, w, d;
for (r = 0; r < 10; r++)
{
	for (w = 0; w < 10; w++)
	{
		d =  r * w;
		if (d > 9)
		{
			putchar('0' + d / 10);
			putchar('0' + d % 10);
			putchar(' ');
		}
		else
		{
			putchar('0' + d);
		}
		int m;

		while ( m ==0 && w != 9)
		{
			putchar(',');
			putchar(' ');
			m++;
		}
		m = 0;

	}
	putchar('\n');
}
}
