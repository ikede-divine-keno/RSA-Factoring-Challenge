#include "factors.h"

/**
 * factorize - This function factorizes a number
 * @buff: pointer to the address of the number
 * Return: 0 on success.
 */
int _factorize(char *buff)
{

	u_int32_t val, i;

	val = atoi(buff);

	for (i = 2; i < val; i++)
	{
		if (val % i == 0)
		{
			printf("%d=%d*%d\n", val, val/i, i);
			break;
		}
	}

	return (0);
}
