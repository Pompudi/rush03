#include <unistd.h>

void write_letter(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
