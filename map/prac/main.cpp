#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> student;
    student[142001] = "TAIMOOR";
    student[142002] = "MASOOD";
    student[142003] = "TARIQ";
    student[142004] = "HAMZA";
    student[142005] = "BILAL";

    student.insert(pair<int, string>(142006, "ZAIN"));

    cout<< student[142006];

    map<int, string>:: iterator i = student.begin();

    while(i != student.end()) {
        cout << i->second;
        cout << endl;
        i++;
    }

    return 0;
}
