#include <clocale>
#include <iostream>
#include "MyQueue.h"

using namespace std;

MyQueue::MyQueue(int queueCapacity) {
    m_iQueueCapacity = queueCapacity;
    m_pQueue = new int[queueCapacity];
}

MyQueue::~MyQueue() {
    delete[] m_pQueue;
    m_pQueue = NULL;
}


void MyQueue::clearQueue() {
    m_head = 0;
    m_tail = 0;
    m_iQueueLen = 0;
}

bool MyQueue::isQueueEmpty() const {
    return m_iQueueLen == 0;
}

int MyQueue::queueLenth() const {
    return m_iQueueLen;
}

bool MyQueue::isQueueFull() const {
    return m_iQueueLen == m_iQueueCapacity;
}

bool MyQueue::addQueue(int element) {
    if (isQueueFull()) {
        return false;
    }
    m_pQueue[m_tail] = element;
    m_tail++;
    m_tail = m_tail % m_iQueueCapacity;
    m_iQueueLen++;
    return true;
}

int MyQueue::leaveQueue() {
    if (isQueueEmpty()) throw "队列空了";
    int element = m_pQueue[m_head];
    m_head++;
    m_head = m_head % m_iQueueCapacity;
    m_iQueueLen--;
    return element;
}

void MyQueue::queueTraverse() {
    for (int i = m_head; i < m_head+m_iQueueLen; i++) {
           cout<< m_pQueue[i%m_iQueueCapacity]<<endl;
    }
}