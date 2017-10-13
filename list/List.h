//
// Created by zc on 2017/8/1.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

class List{
public:
    List(int size);
    ~List();
    void clearList();
    bool listEmpty();
    int  listLength();
    bool getElem(int i, int *e);
    int  indexOf(int *elem);
    bool preElem(int *currentElem,int *preElem);
    bool nextElem(int *currentElem,int *nextElem);
    void listTraverse();
    bool addList(int i,int *elem);
    bool removeList(int i);
private:
    int *m_pList;
    int m_size;
    int m_length;
};


#endif //LIST_LIST_H
