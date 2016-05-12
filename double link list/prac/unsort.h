#include"node.h"


#ifndef UNSORT_H
#define UNSORT_H

class unsort{

private:
    node* head;
    node* tail;



public:
    unsort();
    node* createNode(int);
    void insertData(int);
    void showData();
    void deleteData(int);

};

#endif // UNSORT_H
