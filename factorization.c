#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t index;

	num = atoi(buffer);


	for (index = 2; index < num; index++)
	{
		if (num % index == 0)
		{
			printf("%d=%d*%d\n", num, num / index, index);
			break;
		}
	}

return (0);
}
