#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a=3;
    int* p;
    p=&a;
    std::cout<<p << std::endl;
    int* p2=&a;
    printf("%p\n",p);

    std::cout<<p2;

    struct date{
        int month;
        int day;
        int year;
    };
    struct date dates[100];
    struct date dates2[]={{4,5,2005},{2,4,2005}};

    typedef struct node{
        int value;
        struct node *next;//(指向自己的指针，编译器已编译过struct node认识这个东西)
    }Node;

    typedef struct list{//链表定义
        Node *head;
    }List;

    Date d={9,1,2005};

    return 0;
}