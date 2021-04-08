// dequeTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

void ReservedLst(deque<int> &lst)
{
	deque<int> tempLst;
	while (lst.size() != 0)
	{
		tempLst.push_back(lst.back());
		lst.pop_back();
	}

	lst = tempLst;
}

void Print(deque<int> & lst)
{
	int nLength = lst.size();
	cout<<"����Ϊ��"<<nLength<<endl;
	for (int i = 0; i < nLength; i++)
	{
		cout<<lst[i]<<" ";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{

	deque<int> test;
	/*
	test.push_back(2);
	test.push_back(4);
	test.push_back(0);
	test.push_back(0);
	*/

	test.push_front(2);
	test.push_front(4);
	test.push_front(0);
	test.push_front(0);

	Print(test);
	ReservedLst(test);
	cout<<endl<<"��תЧ����"<<endl;
	Print(test);


	getchar();
	return 0;
}

