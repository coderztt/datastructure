//
// Created by zc on 2017/7/21.
// 环形队列
//

#ifndef QUEUE_MYQUEUE_H
#define QUEUE_MYQUEUE_H

class MyQueue{
public:
    MyQueue(int queueCapacity);//初始化队列
    virtual ~MyQueue(); //销毁队列
    void clearQueue();
    bool isQueueEmpty() const;
    bool isQueueFull() const;
    int  queueLenth() const;
    bool addQueue(int element);//入队
    int leaveQueue();//首元素出队
    void queueTraverse();//遍历

private:
    int *m_pQueue;//队列数组
    int m_iQueueLen;//队列当前长度
    int m_iQueueCapacity;//队列最大容量
    int m_head; //队头
    int m_tail;//队尾
};

#endif //QUEUE_MYQUEUE_H
