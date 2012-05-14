#include <stdio.h>
#include <stdlib.h>

#define round(x) ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))

int main()
{
	int  y, r = 0;
	double w, d;
	while(!((w>5)&&(w<48)))
	{
		srand(time(NULL));
		w = 1 + (int)( 100.0 * rand() / ( RAND_MAX + 1.0 ) );
	}
	while(!((y>6)&&(y<10)))
	{
		y = 1 + (int)( 9.0 * rand() / ( RAND_MAX + 1.0 ) );
	}
	r = 1 + (int)( 9.0 * rand() / ( RAND_MAX + 1.0 ) );
	d = 1 + (int) ( 30.0 * rand() / ( RAND_MAX + 1.0 ) );
	printf("\nSERIAL: LZ%d%d%dMC\n", (int)w, y, r);
	printf("\nPURCHASED: m/d/y %.0f/%d/%d\n\n", w/52*12, (int)d, y+2000);
}
