/* prints the min number of coins to make change for an amount of money */
#include <stdio.h>
#include <stdlib.h>

int cal_min_coin(int cents);

	/**
	* main - prints the minimum number
	* @count: argument count
	* @arg_arr: array of arguments
	* return: 0 if successful, else 1
	*/int main(int count, char *arg_arr[])
{
	int cents;
	int coins;

	if (count != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(arg_arr[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = cal_min_coin(cents);
	printf("%d\n", coins);

	return (0);
}

	/**
	* cal_min_coin - calculates minimum coin
	* @cents: amount given
	* return: coins
	*/int cal_min_coin(int cents)
{
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);
	int i;

	for (i = 0; i < num_coin_values; i++)
	{
		coins += cents / coin_values[i];
		cents %=  coin_values[i];
	}

	return (coins);
}
