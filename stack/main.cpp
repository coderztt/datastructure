#include <iostream>
#include "MyStack.h"
#include "Convert.h"
#include "Parentheses.h"

using namespace std;

void testMyStack(){
    MyStack<char> *pStack=new MyStack<char>(5);

    pStack->push('h');//µ×
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//¶¥

    if(pStack->stackEmpty()){
        cout<<"Õ»Îª¿Õ"<<endl;
    };

    if(pStack->stackFull()){
        cout<<"Õ»ÎªÂú"<<endl;
    };

    pStack->stackTraverse(true);


    pStack->stackTraverse(false);

    delete pStack;
    pStack=NULL;
}


int main() {
//    testMyStack();

//    convert();

    scan();
    return 0;
}

