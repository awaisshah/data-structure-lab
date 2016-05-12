#include <iostream>
#include"unsort.h"
using namespace std;

int main() {

    unsort data;
    data.insertData(10);
    data.insertData(20);
    data.insertData(30);
    data.showData();
    data.deleteData(30);
    data.showData();
    return 0;
}
