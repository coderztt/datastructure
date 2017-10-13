#include <iostream>
#include "MyStack.h"
#include "Convert.h"
#include "Parentheses.h"

using namespace std;

void testMyStack(){
    MyStack<char> *pStack=new MyStack<char>(5);

    pStack->push('h');//��
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//��

    if(pStack->stackEmpty()){
        cout<<"ջΪ��"<<endl;
    };

    if(pStack->stackFull()){
        cout<<"ջΪ��"<<endl;
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

