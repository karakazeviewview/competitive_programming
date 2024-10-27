#include <stdio.h>
#include <unistd.h>
// 以下やりたいこと
// なるべくシステムコールで関数自作
// 足し算関数を作る
// 文字型化関数を作る
// 文字列表示関数を作る

int	my_strlen(char str[])
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	calc_add(int a, int b, int c)
{
	int i = 0;
	int sum = 0;
	sum = a + b + c;
	return (sum);
}

void	num_to_char(int ans)
{
	int			sho;
	int			keta;
	int			num;
	int			cpnum;
	double	warukazu;
	char		word[32];
	int			i;

	keta = 0;
	num = ans;
	sho = num;
	cpnum = num;
	warukazu = 0.1;
	i = 0;
	while (cpnum > 0)
	{
		cpnum = cpnum / 10;
		i++;
		keta++;
		warukazu = warukazu * 10; 
		//printf("keta = %d\nwarukazu = %f\n", keta, warukazu);
	}
	cpnum = num;
    i = 0;
    while (keta > 0)
    {
	    word[i] = cpnum / warukazu + '0';
	    write(1, &word[i], 1);
	    cpnum = cpnum - warukazu * (word[i] - '0');
	    warukazu = warukazu / 10;
	    keta--;
	    i++;
    }
		write (1, " ", 1);
    return ;
}

void	print_str(char str[])
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 2);
		str++;
		i++;
	}
}

int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	int data = 0;
	int ans = 0;
	char str[32];
	int num  ;

	//ans = calc_add(num, ans);
	printf("%d\n", ans);
	while (i < 3)
	{
		scanf("%d%d%d", &a, &b, &c);
		//calc_add();
		//calc_add(a, b, c);
		//printf("num = %d\n sum = %d\n", num, sum);
		//sum = sum + num;
		i++;
	}
	scanf("%s", str);
	num_to_char(sum);
	print_str(str);
	printf("\n");
	return (0);
}