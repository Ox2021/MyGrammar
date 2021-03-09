#include<stdio.h>
#include<string.h>
int left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)//二个字符串长度不相等，那么它就不是旋转的来，直接就返回0 
	{
		return 0;
	}
	strncat(str1, str2, 6);
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
