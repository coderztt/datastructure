//
// Created by zc on 2017/7/28.
//

#ifndef STACK_MYSTACK_H
#define STACK_MYSTACK_H

#include <iostream>

using namespace std;

template <typename T>
class MyStack{
public:
    MyStack(int size);
    ~MyStack();
    bool  stackEmpty();
    bool  stackFull();
    void  clearStack();
    int   stackLength();
    bool  push(T elem);//»Î’ª
    char  pop();//≥ˆ’ª
    void  stackTraverse(bool isFromBottom);

private:
    T *m_pBuffer;
    int  m_size;
    int  m_top;//’ª∂•
};

template <typename T>
MyStack<T>::MyStack(int size) {
    m_size = size;
    m_pBuffer=new T[size];
    m_top = 0;
}

template <typename T>
MyStack<T>::~MyStack() {
    delete []m_pBuffer;
    m_pBuffer=NULL;
}

template <typename T>
bool MyStack<T>::stackEmpty() {
    return 0==m_top;
}

template <typename T>
bool MyStack<T>::stackFull() {
    return m_top>=m_size;
}

template <typename T>
void MyStack<T>::clearStack() {
    m_top=0;

}

template <typename T>
int MyStack<T>::stackLength() {
    return m_top;
}

template <typename T>
bool MyStack<T>::push(T elem) {
    if(stackFull()) return false;
    m_pBuffer[m_top]=elem;
    m_top++;//’ª∂•…œ∏°
}

template <typename T>
char MyStack<T>::pop() {
    if(stackEmpty()) return 0;
    m_top--;//’ª∂•œ¬Ωµ
    return m_pBuffer[m_top];
}

template <typename T>
void MyStack<T>::stackTraverse(bool isFromBottom) {
    if(isFromBottom){
        for (int i = 0; i < stackLength(); i++) {
            cout<<m_pBuffer[i];
        }
    } else{
        for (int i = m_top-1; i >=0; i--) {
            cout<<m_pBuffer[i];
        }
    }
}
#endif //STACK_MYSTACK_H
