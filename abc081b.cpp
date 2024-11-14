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

200個以下のint型N個の、整数A[i]が来る
A[i]はint型で10億以下の整数
scanf()で受け取る

個数N==A[0]である、とは考えない

int i
int N
int A[i]
*/

#include <stdio.h>

int main(void)
{
	int hierarchy1;
	int hierarchy2;
	int N;
	int A[201];
	int counter;
	int flag;
	int i;

	hierarchy1 = 0;
	hierarchy2 = 0;
	N = 0;
	counter = 0;
	flag = 0;
	i = 0;
	scanf("%d", &N);
	while (i < N)
	{
		scanf("%d", &A[i]);
		i++;
	}
	while (flag == 0)
	{
		hierarchy2 = 0;
		while (hierarchy2 < N)
		{
			if (flag == 1)
			{
				break;
			}
			if (flag == 0 && (A[hierarchy2] % 2 == 0))
			{
				A[hierarchy2] = A[hierarchy2] / 2;
			}
			else
			{
				flag = 1;
			}
			hierarchy2++;
		}
		hierarchy1++;
		counter++;
	}
	printf("%d", counter - 1);
	return (0);
}
