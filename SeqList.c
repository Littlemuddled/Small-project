#define  _CRT_SECURE_NO_WARNINGS 1

//#include "Seqlist.h"
//
////��ɾ��ĵȽӿں���
//void SeqListInit(SL* ps)//˳���ĳ�ʼ��
//{
//	ps->a = NULL;
//	ps->size = 0;
//	ps->capacity = 0;
//}
//
//void SeqListPushBack(SL* ps, SQDataType x)//β��    ��β������һ������
//{
//	//���˾�Ҫ����
//	if (ps->size == ps->capacity)
//	{
//		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));//��������2��
//		if (tmp = NULL)//�ж�realloc�Ƿ�ʧ��
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		else
//		{
//			ps->a = tmp;
//			ps->capacity = newcapacity;//���������size�ǲ����
//		}
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//
//
//void SeqListPushFront(SL* ps, SQDataType x);//ͷ��
//void SeqListPopBack(SL* ps);//βɾ
//void SeqListPopBack(SL* ps);//ͷɾ
//
//
//void SeqListPrint(SL* ps)//˳���Ĵ�ӡ
//{
//	for (int i = 0; i < ps->size; ++i)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	printf("\n");
//}