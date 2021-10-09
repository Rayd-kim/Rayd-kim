#include <stdio.h>
int main(void)
{	//rush에서 받아짐.
        int x, y;
        printf("x, y를 입력하세요");
        scanf("%d, %d", &x, &y); 
	
	//첫번째 줄
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
	// 2 ~ y-1 줄
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
	//y 번째 줄
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
