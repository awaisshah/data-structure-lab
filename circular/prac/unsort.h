#include"node.h"

#ifndef UNSORT_H
#define UNSORT_H

class unsort{

private:
node* head;

public:
unsort();
node* createNode(int);
void insertData(int);
void deleteData(int);
void showData();

};


#endif // UNSORT_H
