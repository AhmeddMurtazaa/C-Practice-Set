#include<stdio.h>
main()
{int i=1,j=1;

for(i=1;i<6;i++)
	{for(j=1;j<2;j++)
		{ if(i%2!=0){
			printf(" * * * *  * * * * ");

		}
		else{
			printf("       *        * ");
			
		}
	printf("\n");
		}
	}
}
