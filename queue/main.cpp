#include <iostream>
#include "MyQueue.h"

using namespace std;

void row_number() {
    MyQueue *p = new MyQueue(10);

    int num=1000;
    for (int i = 0; i < 10; i++) {
        p->addQueue(num + i);
    }

    p->queueTraverse();

    //�Ŷ���
    cout<<"��ʼ�Ŷ�"<<endl<<endl;
    while (true) {
        if(p->queueLenth()==1) break;


        int element=p->leaveQueue();
        cout<<"����"<<+element<<endl;
        cout<<"ǰ�滹��"<<p->queueLenth()<<"��"<<endl;

        _sleep (((rand() % 10) + 1) * 1000);
    }

    cout<<p->leaveQueue()<<" ������";

    delete p;
    p = NULL;
}

int main() {
//    MyQueue *p = new MyQueue(4);
//
//    p->addQueue(10);
//    p->addQueue(11);
//    p->addQueue(12);
//    p->addQueue(13);
//    p->addQueue(14);
//
//    p->queueIterator();
//
//    cout<<endl;
//    cout<<p->leaveQueue()<<endl;
//
//    cout<<endl;
//    cout<<p->leaveQueue()<<endl;
//
//    p->queueIterator();
//
//    p->clearQueue();
//    p->queueIterator();
//
//    cout<<endl;
//    p->addQueue(20);
//    p->addQueue(30);
//    p->queueIterator();
//
//    delete p;
//    p = NULL;

    row_number();

    return 0;
}


