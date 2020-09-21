#inclue <iostream>

using namespace std;

class Student{
public:
    Student(char *name);
    void show();
private:
    static int m_total;  //静态成员变量
private:
    char *m_name;
};


