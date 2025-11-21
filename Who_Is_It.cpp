#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char name[101];
    char section;
    int totalMarks;
    Student(int ID, char *name, char section, int totalMarks)
    {
        this->ID = ID;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int ID;
        char name[101];
        char section;
        int totalMarks;
        cin >> ID >> name >> section >> totalMarks;
        Student *a = new Student(ID, name, section, totalMarks);
        cin >> ID >> name >> section >> totalMarks;
        Student *b = new Student(ID, name, section, totalMarks);
        cin >> ID >> name >> section >> totalMarks;
        Student *c = new Student(ID, name, section, totalMarks);

        Student *best = a;
        if (b->totalMarks > best->totalMarks )
            best = b;
        if (c->totalMarks > best->totalMarks)
            best = c;

        cout << best->ID << " " << best->name << " " << best->section << " " << best->totalMarks << endl;
    }

    return 0;
}