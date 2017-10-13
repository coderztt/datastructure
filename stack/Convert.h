//
// Created by zc on 2017/7/30.
//

#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

#include "MyStack.h"

void convert() {
    char num[] = "0123456789ABCDEF";

    MyStack<int> *pStack = new MyStack<int>(30);
    int N = 0;

    cout<<"请输入要转换的数字"<<endl;
    cin>>N;

    int x1=0;
    cout<<"请输入要转化的进制"<<endl<<"1.二进制"<<endl<<"2.八进制"<<endl<<"3.十六进制"<<endl;
    cin>>x1;

    int x2=2;
    switch (x1){
        case 1:x2=BINARY;
            break;
        case 2:x2=OCTONARY;
            break;
        case 3:x2=HEXADECIMAL;
            break;
    }


    int mod = 0;
    while (N != 0) {
        mod = N % x2;
        pStack->push(mod);
        N = N / x2;
    }

    while (!pStack->stackEmpty()) {
        cout<<num[pStack->pop()];
    }

    delete pStack;
    pStack = NULL;

}