#include<stdio.h>

main()

{int col,rows;
col=6;
rows=1;

while(col>1)
	{
		printf("\n");
		col--;
		while(rows<5)
		{
		printf("%3d",col*rows);
		rows++;
		}
	}
}
