#include <iostream>
#include"unsort.h"

using namespace std;

int main()
{
    unsort data;
    data.insertData(15);
    data.insertData(20);
    data.insertData(25);
    data.insertData(30);
    data.showData();
    data.deleteData(25);
    data.showData();


    return 0;
}
