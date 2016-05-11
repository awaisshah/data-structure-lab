#include <iostream>
#include<vector>
#include<list>
#define N 5
using namespace std;

int main()
{
    vector< list<int> >adjList(N);
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[1].push_back(4);
    adjList[2].push_back(5);
    adjList[2].push_back(6);
    adjList[3].push_back(7);
    adjList[3].push_back(8);
    adjList[4].push_back(9);
    adjList[4].push_back(10);

    vector< list<int> >:: iterator i;
    int c = 0;

    for(i = adjList.begin(); i != adjList.end(); ++i) {
        cout << "THE VALUE AT " << c << "is ";
        list<int> li = *i;

        for(list<int> :: iterator iter = li.begin(); iter != li.end(); ++iter)
            cout << *iter << " ";

        cout << endl;
        c++;
    }

    return 0;
}
