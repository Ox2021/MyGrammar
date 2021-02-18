#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Queue.h"
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
void TestQueue()
{
	Queue q;
	QueueInit(&q);
	Queuepush(&q, 1);
	Queuepush(&q, 2);
	Queuepush(&q, 3);
	Queuepush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestory(&q);
}
int main()
{
	//TestStack();
	TestQueue();
	return 0;
}