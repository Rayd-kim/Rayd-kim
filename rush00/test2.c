#include <stdio.h>
#include <unistd.h>


void rush(int x, int y)
{	
	for(int k=1; k<=y; k++)
	{
		if(k==1)
		{
			for (int i =1; i <= x; i++)
		{
						
			if( i==1 || i == x)
			write(1, "A", 1);
			
			else
			write(1, "B", 1);
		}
		write(1, "\n", 1);

		}
		
		else if(k >1 && k < y )
		{
			for (int i =1; i <= x; i++)
			{
				if( i==1 || i == x)
				write(1, "B", 1);
										
				else
				write(1, " ", 1);
			}
		write(1, "\n", 1);
		}
			
		else
		{
			for (int i =1; i <= x; i++)
			{
				if( i==1 || i == x)
				write(1, "C", 1);
											
				else
				write(1, "B", 1);
			}
		}
		
	}
	write(1, "\n", 1);
}

int main()
{
	rush (5, 5);
	return 0;
}
