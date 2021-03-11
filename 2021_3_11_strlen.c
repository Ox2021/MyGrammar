#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//str++意思是它的地址加一，找到下一个字符的地址。 
	}
	return count;
}
int main(void)
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	strlen
}
