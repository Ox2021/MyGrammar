#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int score;
};
int main(void)
{
	char temp[20] = { 0 };
	struct stu arr[20] = { 0 };
	int num[20] = { 0 };
	char tar[20] = { 0 };
	int n = 0;
	int k = 0;
	int i = 0;

	scanf("%s", temp);
	while (strcmp(temp, "end"))
	{
		if (!strcmp(temp, "insert"))
		{
			scanf("%s %d", arr[k].name, &arr[k].score);
			k++;
		}
		if (!strcmp(temp, "find"))
		{
			scanf("%s", tar);
			for (i = 0; i < k; i++)
			{
				if (!strcmp(tar, arr[i].name))
				{
					num[n] = arr[i].score;
					break;
				}
			}
			if (i == k)
			{
				num[n] = -1;
			}
			n++;
		}
		scanf("%s", temp);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}