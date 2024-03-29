#include "../include/fizz_buzz.h"

/*
	So all these functions from ft_strlen to ft_atoi are for my atoi sorry
*/
static int ft_strlen(const char *str){
	int i;

	i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

static int	ft_char_count(int n)
{
	int	count;

	count = 2;
	if (n < 0)
	{
		count ++;
	}
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static char	*ft_swap_neg(char *str)
{
	int	i;
	int	ri;
	int	size;
	int	temp;

	i = 0;
	size = ft_strlen((const char *)str);
	ri = ft_strlen((const char *)str) - 1;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[ri];
		str[ri] = temp;
		i++;
		ri--;
	}
	return (str);
}


static char	*ft_swap(char *str)
{
	int	i;
	int	ri;
	int	size;
	int	temp;

	i = 0;
	size = ft_strlen((const char *)str);
	ri = ft_strlen((const char *)str) - 1;
	if (str[0] == '-')
		ft_swap_neg(str + 1);
	else
	{
		while (i < (size / 2))
		{
			temp = str[i];
			str[i] = str[ri];
			str[ri] = temp;
			i++;
			ri--;
		}
	}
	return (str);
}

/*
	Converting an int into a string
*/
char	*ft_itoa(long long n)
{
	char	*rtn;
	int		i;

	i = 0;
	rtn = calloc(ft_char_count(n), sizeof(char));
	if (!rtn)
		return (NULL);
	if (n == 0)
	{
		rtn[0] = '0';
		i++;
	}
	if (n < 0)
	{
		rtn[i++] = '-';
		rtn[i++] = '0' - n % 10;
		n = n / -10;
	}
	while (n)
	{
		rtn[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	return (ft_swap(rtn));
}
