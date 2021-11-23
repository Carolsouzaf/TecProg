#ifndef LIST_H
#define LIST_H

#include "Element.h"
/*
List Based on Template List made by Jean Simão:
Website Link: https://pessoal.dainf.ct.utfpr.edu.br/jeansimao/
*/
using namespace std;

namespace Lists {
    template<class TE>
    class List {
    private:
        Element<TE> *pFirst;
        Element<TE> *pLast;

        int len;

    public:
        List() {
            pFirst = nullptr;
            pLast = nullptr;
            len = 0;
        }

        ~List() {
            pFirst = nullptr;
            pLast = nullptr;
            len = 0;
        }

        int getLen() { return len; }

        TE *getPInfo(int pos) {
            Element<TE> *temp = pFirst;

            if (pos == 0)
                return temp->getPInfo();
            for (int i = 0; i < pos; i++)
                temp = temp->getPNext();

            return temp->getPInfo();
        }

        void push(TE *pInfo) {
            if (pFirst == nullptr) {
                pFirst = new Element<TE>;
                pFirst->setPInfo(pInfo);
                pLast = pFirst;
            } else {
                Element<TE> *temp = new Element<TE>;
                temp->setPInfo(pInfo);
                pLast->setPNext(temp);
                pLast = temp;
            }
            len++;
        }

        void pop(TE *pInfo) {
            Element<TE> *temp = pFirst;
            Element<TE> *tempBack = nullptr;

            while (temp && temp->getPInfo() != pInfo) {
                tempBack = temp;
                temp = temp->getPNext();
            }

            // First element in the list
            if (temp == pFirst)
                pFirst = temp->getPNext();
                // Last element in the list
            else if (temp == pLast) {
                tempBack->setPNext(nullptr);
                pLast = tempBack;
            } // In the middle of the list
            else if (temp)
                tempBack->setPNext(temp->getPNext());

            if (temp)
                len--;
            delete temp;
        }

        TE *operator[](int i) {
            return this->getPInfo(i);
        }
    };
}
#endif
