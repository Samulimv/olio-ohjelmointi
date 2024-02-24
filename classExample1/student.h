#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student1
{
private:
    string fname;
    string lname;
public:
    Student1();
    Student1(string fn, string ln);
    ~Student1();

    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);
    void studentInfo();
};

#endif // STUDENT_H
