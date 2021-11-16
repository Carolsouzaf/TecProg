#ifndef ELEMENT_H
#define ELEMENT_H

template <class TE> class Element
{
private:
	Element<TE>* pNext;
	TE* pInfo;
public:
	Element();
	~Element();

	void setPNext(Element<T>* pnext) { this->pNext = pnext; }
	void setPInfo(TE* pinfo) { this->pInfo = pinfo; }
	Element<TE>* getPNext() { return pNext; }
	TE* getPInfo() { return pInfo; }
};
template<class TE>
Element<TE>::Element()
{
	pNext = nullptr;
	pInfo = nullptr;
}
template<class TE>
Element<TE>::~Element()
{
	pNext = nullptr;
	pInfo = nullptr;
}


#endif