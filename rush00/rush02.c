#include <stdio.h>

int main(void)
{

	int x, y;
	printf("x, y를 입력하세요");
	scanf("%d, %d", &x, &y);

	for(int k=1; k<=y; k++)
	{
		if(k==1)
		{
			for (int i =1; i <= x; i++)
		{
						
			if( i==1 || i == x)
			printf("A");
			
			else
			printf("B");
		}
		printf("\n");

		}
		
		else if(k >1 && k < y )
		{
			for (int i =1; i <= x; i++)
			{
				if( i==1 || i == x)
				printf("B");
										
				else
				printf(" ");
			}
		printf("\n");
		}
			
		else
		{
			for (int i =1; i <= x; i++)
			{
				if( i==1 || i == x)
				printf("C");
											
				else
				printf("B");
			}
		}
		
	}
	printf("\n");
	return 0;
}
