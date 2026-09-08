#include<stdio.h>


int calculate_quaters(int cents)
{
	int quaters = 0;
	
	while(cents >= 25)
	{
		quaters++;
		cents = cents - 25;
	}
	return quaters;
}


int calculate_dimes(int cents)
{
	int dimes = 0;
	while(cents >= 10)
	{
		dimes++;
		cents = cents - 10;
	}
	return dimes;
}


int calculate_nickels(int cents)
{
	int nickels = 0;
	while(cents >= 5)
	{
		nickels++;
		cents = cents - 5;
	}
	return nickels;
}

int calculate_pennies(int cents)
{
	int pennies = 0;
	while(cents >= 1)
	{
		pennies++;
		cents =  cents - 1;
	}
	return pennies;
}


int main(void)
{
	int cents,quaters,dimes,nickels,pennies,numberOfCoins;
	
	do
	{
		printf("Change Owed?: ");
		scanf(" %d",&cents);
	}
	while(cents < 0);
	
	// calculate number of quaters
	quaters = calculate_quaters(cents);
	
	
	// deduct cents equivalent to number of quates to get the remaining cents left (e.g 120 cents will now be 120-(4*25), which will give 20 cents)
	cents = cents - (quaters * 25);
		
	// calculate number of dimes
	dimes = calculate_dimes(cents);

	cents = cents - (dimes * 10);
	
	// calculate number of nickels
	nickels = calculate_nickels(cents);

	cents = cents - (nickels * 5);
	
	// calculate number of pennies
	pennies = calculate_pennies(cents);

	cents = cents - pennies;
	
	numberOfCoins = quaters + dimes + nickels + pennies;
	
	printf("%d",numberOfCoins);
	
	
	return 0;
		
	
}
