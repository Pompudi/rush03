typedef unsigned int uint;
uint disharge(uint digit)
{
	
	if (digit >= 1000000000)
		return (1000000000);
	else if (digit >= 1000000)
		return (1000000);
	else if (digit >= 1000)
		return (1000)
	else if (digit >= 100)
		return (100);
	else if (digit <= 20)
		return (digit);
	else
		return (21);
}
void print(t_dict *tab, uint n, int flag)
{
	while (tab[i].num != n)
		i++;
	if (flag == 1)
		write(1, " ", 1);
	ft_putstr(tab[i].text);
}
void write_letter(t_dict *tab, uint  num, int flag);
{
	uint dish;
	dish = disharge(num);
	if (dish > 20)
	{
		print(tab, num / dish, flag);
		flag = 1;
		print(tab, dish, flag);
	}
	else if (dish == 21)
	{
		print(tab, num - num % 10, flag);
		flag = 1;
		if (num % 10 != 0)
			print(tab, num % 10, flag);
	}
	else
		print(tab, dish, flag);
	if (num != dish && num != 0) 
		write_letter(tab, num % dish, flag);
}
