// TestWin32CMD.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>

#include "Util/CrashCatch.h"

typedef struct tagAGuiData
{
	char arrText[100];
	int n;
}AGuiData;

void Test()
{
	AGuiData* pData = new AGuiData;
	delete pData;
	pData = NULL;
	int n = pData->n;
	memcpy(pData->arrText, "hello world", 10);
	for(int i=0;i<n;i++)
	{
		printf("hello");
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	Init_CrashCatch();

	Test();

	system("pause");
	return 0;
}

