#define  _CRT_SECURE_NO_WARNINGS 1

#include "Seqlist.h"

//void TestSeqList1()
//{
//	SL s1;
//	SeqListInit(&s1);//´«µØÖ·
//
//	SeqListPushBack(&s1, 1);
//	SeqListPushBack(&s1, 2);
//	SeqListPushBack(&s1, 3);
//	SeqListPushBack(&s1, 4);
//	SeqListPushBack(&s1, 5);
//	SeqListPushBack(&s1, 6);
//	SeqListPushBack(&s1, 7);
//	SeqListPushBack(&s1, 8);
//	SeqListPushBack(&s1, 9);
//	SeqListPushBack(&s1, 10);
//	SeqListPushBack(&s1, 11);
//
//	SeqListPrint(&s1);
//}
//
//int main()
//{
//	TestSeqList1();
//
//	return 0;
//


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int removeElement(int* nums, int numsSize, int val)
//{
//    int src = 0;
//    int dest = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] != val)
//        {
//            nums[dest++] = nums[src++];
//        }
//        else
//        {
//            src++;
//        }
//    }
//    return dest;
//}

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int end1 = m - 1;
//    int end2 = n - 1;
//    int end = m + n - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {
//            nums1[end] = nums1[end1];
//            end--;
//            end1--;
//        }
//        else
//        {
//            nums1[end] = nums2[end2];
//            end--;
//            end2--;
//        }
//    }
//    while (end2 >= 0)
//    {
//        nums1[end] = nums2[end2];
//        end--;
//        end2--;
//    }
//}