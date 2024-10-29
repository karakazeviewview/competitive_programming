#include <stdio.h>
#include <unistd.h>

void	my_putchar(char str[])
{
	int i = 0; // カウンタ変数
	while (str[i] != '\0') // 文字列の最後でない限りループ
	{
		write (1, &str[i], 1);
		i = i + 1;
	}
}

void my_judgeoddeven(int num)
{
	int res;
	char str_o[32] = "Odd";
	char str_e[32] = "Even";
	if (num % 2 != 0)
	{
		my_putchar(str_o);
	}
	else
	{
		my_putchar(str_e);
	}
	return ;
}

int main(void)
{
	int num_a;
	int num_b;
	int product;

	scanf("%d%d", &num_a, &num_b);
	product = num_a * num_b;
	my_judgeoddeven(product);
	return (0);
}
