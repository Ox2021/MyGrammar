#pragma once
#include<stdio.h>
#include<stdlib.h>

//顺序表，有效数据在数组中必须是连续的
typedef int SLDataType;
#define N 10
typedef struct SeqList
{
	SLDataType* a; 
	int size;      //有效数据的个数
	int capacity;  //容量空间的大小
}SL, SeqList;
//尾插 尾删 头插 头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//任意位置的插入删除
void SeqListInsert（SL* ps, int pos, SLDataType x）;
void SeqListErase（SL* ps, int pos）;