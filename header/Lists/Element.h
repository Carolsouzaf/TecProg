#ifndef ELEMENT_H
#define ELEMENT_H
using namespace std;

namespace Lists {
    template<class TE>
    class Element {
    private:
        Element<TE> *pNext;
        TE *pInfo;
    public:
        Element() {
            pNext = nullptr;
            pInfo = nullptr;
        }

        ~Element() {
            pNext = nullptr;
            pInfo = nullptr;
        }

        void setPNext(Element<T> *pnext) { this->pNext = pnext; }

        void setPInfo(TE *pinfo) { this->pInfo = pinfo; }

        Element<TE> *getPNext() { return pNext; }

        TE *getPInfo() { return pInfo; }
    };
}

#endif