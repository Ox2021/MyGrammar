#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef struct Stack
{
	int* _a;
	int _top;//栈顶下标
	int _capacity;
}Stack;
void StackInit(Stack* pst);
void StackDestory(Stack* pst);

//入栈
void StackPush(Stack*pst,int x);

//出栈
void StackPop(Stack* pst);

//获取数据的个数
int StackSize(Stack* pst);

//返回1是空，返回0是非空
int StackEmpty(Stack* pst);

//获取栈顶的数据
int StackTop(Stack* pst);


