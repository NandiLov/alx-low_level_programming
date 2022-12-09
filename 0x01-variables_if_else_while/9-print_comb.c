include < stdio.h >
/**
 *prints all possible combinations of single-digit numbers
 *Return: 0
 */
int main(void)
{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
}
