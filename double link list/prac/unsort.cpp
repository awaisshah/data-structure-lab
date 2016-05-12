#include"unsort.h"

unsort:: unsort() {
    head = NULL;
    tail = NULL;
};

node* unsort::createNode(int newData) {
    node* temp = new node;
    temp->left = NULL;
    temp->right = NULL;
    temp->data = newData;
return temp;
};

void unsort::insertData(int newData) {
    node* temp = createNode(newData);

    if((head == NULL) && (tail == NULL)) {

        head = tail = temp;
        head->right = temp;
        temp->right = tail;

    }
    else {
        node* current = head;
        while (current->right != tail) {
            current = current->right;
        }
        current->right = temp;
        temp->left = current;
        temp->right = tail;
    }

};

void unsort:: showData() {
    node* current = head;
    while(current->right != tail) {
        cout << current->data<<endl;
        current = current->right;
    }
    cout << current->data;
};


void unsort:: deleteData(int newData) {
    cout << endl;
    node* current = head;

    if(current->data == newData) {
        head = head->right;
    }
    else {

        while(current->right->data != newData) {
            current = current->right;
        }
        node* temp = current->right;
        current->right = temp->right;
        temp->right->left = current;

    }
};

