#include <stdio.h>
int main()
{
	int n;
	printf("Inserisci numero: ");
	scanf("%d", &n);
	if(n==0)
	{
		printf("Positivo");
	}
	else
	{
		if(n>0&&n%2==0)
		{
			printf("Positivo pari");
		}
		else
		{
			if(n<0&&n%2!=0)
			{
				printf("Negativo dispari");
			}
			else
			{
				if(n<0&&n%2==0)
				{
					printf("Negativo pari");
				}
				else
				{
					printf("Positivo dispari");
				}
			}
		}
	}
}
