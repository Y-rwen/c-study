#define   _CRT_SECURE_NO_WARNINGS

#include "SList.h"


//void TestList1()
//{
//	LTNode* pList  = ListInit();
//	ListPushBack(pList, 1);
//	ListPushBack(pList, 2); 
//	ListPushBack(pList, 3); 
//	ListPushBack(pList, 4);
//	ListPrint(pList);
//
//
//	ListPopBack(pList);
//	ListPopBack(pList);
//	ListPopBack(pList);
//	ListPopBack(pList);
//	ListPrint(pList);
//
//	return 0;
//}

void TestList2()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	
	SListPrint(plist);

	return 0;
}



int main()
{
	TestList2();

	return 0;
}