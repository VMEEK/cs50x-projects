#include<stdio.h>


void print_spaces(int height)
{
	for (int i = 0; i < height; i++)
	{
		printf("\ ");
	}		
}



int main(void)
{
	int height,spaces;
	
	do 
	{
		printf("Height: ");
		scanf("%d", &height);
	}
	while(height < 0 || height > 8);
	
	spaces = height;
	
	
		for (int i = 0; i <= height; i++)
		{	
			print_spaces(spaces);
			for(int j = 0; j < i; j++)
			{
					printf("#");
		
			}
			printf("\ \ ");
			
			for (int k = 0; k < i; k++)
			{
				
				printf("#");
				
			}
			printf("\n");
			spaces--;
		}
	

}
