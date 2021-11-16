#ifndef LIST_H
#define LIST_H

#include "Element.h"
/*
List Based on Template List made by Jean Simão:
Website Link: https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/
*/
template <class TE> class List
{
private:
	Element<TE>* pFirst;
	Element<TE>* pLast;

	int len;

public:
	List();
	~List();

	int getLen() { return len; }
	TE* getPInfo(int pos);
	void push(TE* pInfo);
	void pop(TE* pInfo);

	TE* operator[](int i);
};

template<class TE>
List<TE>::~List()
{
	pFirst = nullptr;
	pLast = nullptr;
	len = 0;
}

template<class TE>
List<TE>::List():
	len(0)
{
	pFirst = nullptr;
	pLast = nullptr;
}

template<class TE>
TE* List<TE>::getPInfo(int pos)
{
	Element<TE>* temp = pFirst;

	if (pos == 0)
		return temp->getPInfo();
	for (int i = 0; i < pos; i++)
		temp = temp->getPNext();

	return temp->getPInfo();
}

template<class TE>
void List<TE>::push(TE* pInfo)
{
	if (pFirst == nullptr)
	{
		pFirst = new Element<TE>;
		pFirst->setPInfo(pInfo);
		pLast = pFirst;
	}
	else
	{
		Element<TE>* temp = new Element<TE>;
		temp->setPInfo(pInfo);
		pLast->setPNext(temp);
		pLast = temp;
	}
	len++;
}

template<class TE>
void List<TE>::pop(TE* pInfo)
{
	Element<TE>* temp = pFirst;
	Element<TE>* tempBack = nullptr;

	while (temp && temp->getPInfo() != pInfo)
	{
		tempBack = temp;
		temp = temp->getPNext();
	}

	// First element in the list
	if (temp == pFirst)
		pFirst = temp->getPNext();
		// Last element in the list
	else if (temp == pLast)
	{
		tempBack->setPNext(nullptr);
		pLast = tempBack;
	} // In the middle of the list
	else if (temp)
		tempBack->setPNext(temp->getPNext());

	if (temp)
	    len--;
	delete temp;
}

template<class TE>
TE* List<TE>::operator[](int i)
{
	return this->getPInfo(i);
}

#endif
