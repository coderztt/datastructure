//
// Created by zc on 2017/8/1.
//
#include "List.h"
#include <iostream>

using namespace std;

List::List(int size) {
    m_size=size;
    m_pList=new int[size];
    m_length=0;
}

List::~List() {
    delete []m_pList;
    m_pList=NULL;
}

void List::clearList() {
    m_length=0;
}

bool List::listEmpty() {
    return m_length==0;
}

int  List::listLength(){
    return m_length;
}

bool List::getElem(int i, int *e) {
    if(i<0||i>=m_size){
        return false;
    } else{
        *e=m_pList[i];
        return true;
    }
}

int List::indexOf(int *e) {
    for(int i=0;i<m_length;i++){
        if(m_pList[i]==*e){
            return i;
        }
    }
    return -1;
}

bool List::preElem(int *currentElem, int *preElem) {
    int temp = indexOf(currentElem);
    if(temp==-1||temp==0) return false;
    *preElem=m_pList[temp-1];
    return true;
}

bool List::nextElem(int *currentElem, int *nextElem) {
    int temp=indexOf(currentElem);
    if(temp==-1||temp==m_length-1) return false;
    *nextElem=m_pList[temp+1];
    return true;
}

void List::listTraverse() {
    for (int i;i<m_length;i++){
        cout<<m_pList[i]<<endl;
    }
}

bool List::addList(int i,int *elem) {
    if(i<0||i>m_length) return false;
    for (int j=m_length-1;j>=i;j--){
        m_pList[j+1]=m_pList[j];
    }
    m_pList[i]=*elem;
    m_length++;
    return true;
}

bool List::removeList(int i) {
    if(i<0||i>=m_length) return false;
    for (int j=i+1;j<m_length;j++){
        m_pList[j-1]=m_pList[j];
    }
    m_length--;
    return true;
}