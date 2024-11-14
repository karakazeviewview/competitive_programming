// shift only
/*
#include <stdio.h>
int main(void)
{
	int N;
	int Ncp;
	int A[200];
	int flag = 0;
	int i = 0;
	int division_counter = 0;
	scanf("%d", &N);
	Ncp = N;
	while (Ncp > 0)
	{
		scanf("%d", &A[i]);
		printf("A[%d] = %d\n", i, A[i]);
		if (A[i] % 2 == 0 || flag == 0)
		{
			A[i] = A[i] / 2;
		}
		else
		{
			flag = 1;
		}
		if (flag == 0)
		{
			division_counter++;
		}
			i++;
			Ncp--;
	}
	printf("division_counter = %d\n", division_counter);
	return (0);
}

200個以下のint型N個の数A [i] が来る
				A[i] はint型で10億以下
				scanf() で

個数N== A[0]

int i
int N
int A[i]
int Ncp

*/

#include <stdio.h>

int main(void)
{

	int so1 = 0;
	int so2 = 0;
	int N;
	int A[201];
	int Ncp;
	int counter = 0;
	int flag = 0;
	int i = 0;

	so1 = 0;
	so2 = 0;
	scanf("%d", &N);
	//printf("N = %d\n", N);
	while (i < N)
	{
		//printf("N = %d\n", N);
		scanf("%d", &A[i]);
		//printf("%d\n", A[i]);
		i++;
	}
	Ncp = N;
	so2 = 0;
	while (flag == 0)
	{
		so2 = 0;
		// if (flag == 0)
		// if (1)
		//{
		while (so2 <  N)
		{
			//if (flag == 0 && (A[so2] % 2 != 0))
			//{
				//flag = 1;
			//}
			// if (A[so2] % 2 == 0 && flag == 0)
			if (flag == 1)
			{
				break;
			}
			if (flag == 0 && (A[so2] % 2 == 0))
			{
				A[so2] = A[so2] / 2;
				//printf("A[%d] = %d\n",so2, A[so2]);
			}
			else
			{
				flag = 1;
			}
			so2++;
			//}
			//printf("res = %d\n", counter);
		}
  	//printf("counter = %d\n", counter);
	
		so1++;
		counter++;
	}
	printf("%d", counter - 1);
	return (0);
}
