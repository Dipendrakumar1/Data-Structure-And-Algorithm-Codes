#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    int rollno;
    char name[20];
    float mark;
};
struct student1
{
    int rollno;
    float mark;
    char *name;
};
void printStruct(struct student s)
{
    cout << s.rollno << endl;
    cout << s.name << endl;
    cout << s.mark << endl;
    cout << endl;
}
void printStruct1(struct student1 s)
{
    cout << s.rollno << endl;
    cout << s.name << endl;
    cout << s.mark << endl;
    cout << endl;
}
int main()
{
    // (struct studet) --> name of the data type
    struct student s1;
    s1.rollno = 20051922;
    strcpy(s1.name, "Dipendra");
    s1.mark = 85.0;
    printStruct(s1);
    struct student s2;
    s2 = s1; // --> by using of assignment operator whole thing will be copied to new object as it is.
    printStruct(s2);
    struct student1 ss1;
    ss1.rollno=1922;
    ss1.mark=90;
    ss1.name=(char *)malloc(10*sizeof(char));
    strcpy(ss1.name,"Deep");
    printStruct1(ss1);
    struct student1 ss2;
    ss2=ss1;
    printStruct1(ss2);
    cout << endl;
    return 0;
}