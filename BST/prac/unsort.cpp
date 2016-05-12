#include"unsort.h"

unsort::unsort() {
    root = NULL;
};


node* unsort:: createNode(int newData) {
    node* temp = new node;
    temp->left = NULL;
    temp->right = NULL;
    temp->data = newData;

return temp;
};

void unsort:: insertNode(int newData) {
    node* temp = createNode(newData);

    if (root == NULL) {
        root = temp;
    }
    else {
        if(temp > root) {
          while(temp > root)


        }

    }

};
