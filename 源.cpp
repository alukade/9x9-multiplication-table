#include<stdio.h>
int main()
{
	int i, j;
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);//%-3d三位左对齐，%3d三位右对齐
		}
		putchar('\n');
	}
	return 0;
}