#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"

void SeqListInit(SL s)
{
	s.a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (s.a == NULL)
	{
		printf("申请内存失败！\n");
		exit(-1);
	}
	s.size = 0;
	s.capacity = 4;
}
//尾插 尾删 头插 头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//任意位置的插入删除
void SeqListInsert（SL* ps, int pos, SLDataType x);
void SeqListErase（SL* ps, int pos);
