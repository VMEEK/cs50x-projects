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
	int n,spaces;

	do
	{
		printf("Height: ");
		scanf("%d",&n);
	}
	while(n < 1);
	
	spaces = n;
	for (int i = 0; i <= n; i++){	
			print_spaces(spaces);
		for(int j = 0; j < i; j++)
		{

				printf("#");
		}
			spaces--;	
			printf("\n");
		}

}

