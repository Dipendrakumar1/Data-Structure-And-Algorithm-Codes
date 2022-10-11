#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    float mark;
};
int main()
{
    // (struct studet) --> name of the data type
    struct student s1;
    s1.rollno = 20051922;
    strcpy(s1.name, "Dipendra");
    s1.mark = 85.0;
    cout << s1.rollno << endl;
    cout << s1.name << endl;
    cout << s1.mark << endl;
    char *p;
    // p=(char *)&s1.name;
    p = (char *)(&s1.rollno + 1);
    for (int i = 0; i < 8; i++)
        cout << *(p + i);
    float *p1;
    // 1 == 4byte in this scenario
    // because at startinf we are taking integer data type
    p1 = (float *)(&s1.rollno + 6);
    cout << endl
         << *p1;
    cout << endl;
    return 0;
}