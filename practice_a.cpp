// やりたいこと
// 足し算関数を作る, 数値を文字に変換する文字化関数を作る, 文字列表示関数を作る, つまりなるべく標準ライブラリを使わず3つの関数を作りたい
// 足し算関数は引数の個数の変化に対応、int型で返り値は合計値sum

// 文字化変数はvoid型で返り値無し

// 文字列表示関数はvoid型で返り値なしでwriteシステムコールを使う
// 文字列最後の'\0'でない限りカウンタ変数でループ
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/*
int		my_addabc(int a, int b, int c)
{
	int	sum; // 合計値を格納
	sum = a + b + c;
	return sum;
}
*/


int calc_add( int num_of_arg, int num1, ...)
{
	// printf("n_o_a = %d\n", num_of_arg);
	int sum = 0;
	va_list ap;
	va_start(ap, num1);
	sum = sum + num1;
	// printf("sum = %d\n", sum);
	int i = 0;
	while (i <= num_of_arg)
	{
		// printf(" num%d\n", i + 1);
		sum = sum + va_arg(ap, int);
		// printf("sum = %d\n", sum);
		i++;
		num_of_arg--;
	}
	return sum;
}

void	my_numtochar(int num)
{
	int keta;
	int ketacp;
	int warukazu;
	int amari;
	int i;
	int j;
	int k;
	int numcp;
	int res;
	char chared_num[32];

	i = 0;
	keta = 1;
	numcp = num;
	while (numcp / 10 > 0)
	{
		numcp = numcp / 10; // 桁数を数える
		keta++;
	}
	//printf("keta = %d\n", keta);
	ketacp = keta;
	numcp = num;
	i = ketacp - 1;
	while (ketacp > 0)
	{
		amari = numcp % 10;
		//printf("amari = %d\n", amari);
		numcp = numcp / 10;
		//printf("numcp = %d\n", numcp);
		//printf("chared_num[%d] = %c\n", i, amari + '0');
		chared_num[i] = amari + '0';
		i--;
		ketacp--;
	}
	//printf("\n");
	ketacp = keta;
	i = 0;
	while (keta > i)
	{
		write(1, &chared_num[i], 1);
		i++;
	}
	//printf("\n");

	//return *chared_num;
}

void	my_putchar(char str[])
{
	int i = 0; // カウンタ変数
	while (str[i] != '\0') // 文字列の最後でない限りループ
	{
		write (1, &str[i], 1);
		i = i + 1;
	}
}

int		main(void)
{
	int		a;
	int		b;
	int		c;
	int 	num_of_args;
	int 	res;
	char	str[1000];
	char chared_num[1000];

	num_of_args = scanf("%d%d%d", &a, &b, &c);
	scanf("%s", str);
	res = calc_add(num_of_args, a, b, c);
	my_numtochar(res);
	write(1, " ", 1);
	my_putchar(str);
	// chared_num = my_numtochar(num);
	// printf("%s\n", chared_num);
	return (0);
}
