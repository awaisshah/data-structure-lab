#include"unsort.h"


unsort:: unsort() {
    head = NULL;

};

node* unsort:: createNode(int newData) {

    node* temp = new node;
    temp->data = newData;
    temp->next = NULL;
return temp;
};


void unsort:: insertData(int newData) {
    node* temp = createNode(newData);

    if(head == NULL) {
        head = temp;
        temp->next = head;

    }

    else{
        node* current = head;
        while(current->next != head) {
            current = current->next;
        }
        current->next = temp;
        temp->next = head;

    }

};

void unsort::showData() {
    node* temp = head;
    while(temp->next != head) {
        cout << temp->data<<endl;
        temp = temp->next;

    }
    cout << temp->data;
};



void unsort::deleteData(int newData) {
    node* pre = head;
    node* post = new node;


    while(pre->next->data != newData) {
        pre= pre->next;
    }
    post = pre->next;
    pre->next = post->next;

};
