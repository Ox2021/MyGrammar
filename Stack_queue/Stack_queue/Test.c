#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void TestStack()
{
	//后进先出是相对入的时候在栈里面的数据
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	StackDestory(&st);
}
int main()
{
	TestStack();
	return 0;
}