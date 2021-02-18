#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;//ջ���±�
	int _capacity;
}Stack;

//��ʼ��������
void StackInit(Stack* pst);
void StackDestory(Stack* pst);

//��ջ
void StackPush(Stack*pst,STDataType x);

//��ջ
void StackPop(Stack* pst);

//��ȡ���ݵĸ���
int StackSize(Stack* pst);

//����1�ǿգ�����0�Ƿǿ�
int StackEmpty(Stack* pst);

//��ȡջ��������
STDataType StackTop(Stack* pst);

