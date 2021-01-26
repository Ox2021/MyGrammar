#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int pal_num(int tar)
{
	int temp = tar;
	int sum = 0;
	while (temp)
	{
		sum = sum * 10 + temp % 10;
		temp = temp / 10;
	}
	if (sum == tar)
	{
		return 1;
	}
	else
	{
		return sum;
	}
}
int main()
{
	int n = 0;

	while (~scanf("%d", &n))
	{
		int a[100] = { n };
		int k = 1;
		int i = 0;
		int ret = n;
		int temp = n;

		while (1)
		{
			ret = pal_num(temp);
			if (ret == 1)
			{
				break;
			}
			else
			{
				temp = ret + temp;
				a[k] = temp;
				k++;
			}
		}
		printf("%d\n", k - 1);
		for (i = 0; i < k - 1; i++)
		{
			printf("%d--->", a[i]);
		}
		printf("%d\n", a[k - 1]);
	}
	return 0;
}