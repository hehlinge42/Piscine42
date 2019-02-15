#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	char *res;
	//res = ft_convert_base("1", "01", "0123456789ABCDEF");
	res = ft_convert_base("111001010", "01", "0123456789ABCDEF");
	//res = ft_convert_base("1011", "01", "0123456789ABCDEF");
	printf("%s", res);
}
