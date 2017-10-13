//
// Created by zc on 2017/7/30.
//

#ifndef STACK_PARENTHESES_H
#define STACK_PARENTHESES_H

#include <cstring>
#include "MyStack.h"

void scan() {
    MyStack<char> *pStack = new MyStack<char>(30);
    MyStack<char> *pNeedStack = new MyStack<char>(30);

    char str[] = "[()]";

    char currentNeed = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != currentNeed) {
            pStack->push(str[i]);
            switch (str[i]) {
                case '[':
                    if (currentNeed != 0) {
                        pNeedStack->push(currentNeed);
                    }
                    currentNeed = ']';
                    break;
                case '(':
                    if (currentNeed != 0) {
                        pNeedStack->push(currentNeed);
                    }
                    currentNeed = ')';
                    break;
                default:
                    cout<<"µ±Ç°×Ö·û´®À¨ºÅ²»Æ¥Åä";
                    return ;
            }
        } else{
            pStack->pop();
            currentNeed=pNeedStack->pop();
            if (currentNeed==0){
               currentNeed=0;
           }
        }
    }
    if(pStack->stackEmpty()){
        cout<<"µ±Ç°×Ö·û´®À¨ºÅÆ¥Åä";
    } else{
        cout<<"µ±Ç°×Ö·û´®À¨ºÅ²»Æ¥Åä";
    }
    delete pStack;
    pStack = NULL;

    delete pNeedStack;
    pNeedStack = NULL;
}

#endif //STACK_PARENTHESES_H
