#include <stdio.h>
#include <unistd.h>

//char word[3];
void check_zero_one()
{
	return ;
}
char	*num_to_char(int ans)
{
	int			sho;
	int			keta;
	int			num;
	int			cpnum;
	double	warukazu;
	int			i;
	char word[3];

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
	}
	cpnum = num;
    i = 0;
    while (keta > 0)
    {
	    word[i] = cpnum / warukazu + '0';
	    cpnum = cpnum - warukazu * (word[i] - '0');
	    warukazu = warukazu / 10;
	    keta--;
	    i++;
    }
    return word;
}
int main(void)
{
	char square[3];
	int num_square;
	int marble = 0;
	int i = 0;
	scanf("%d", &num_square);
	char *res = num_to_char(num_square);
	i = 0;
	while (i < 3)
	{
		if (res[i] - '0' == 1)
		{
			marble++;
		}
		i++;
	}
	// check_zero_one();
	printf("%d", marble);
	return (0);
}
