#include <stdio.h>
int main()
{
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		if (i == 10)
		{
			break;
		}

		printf("\t %d\n", i);
	}

	
}