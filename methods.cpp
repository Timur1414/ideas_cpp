#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    int iq;
    string name;
    int age;
    int moral;

    bool answer() {
        if (iq > 10)
            return true;
        return false;
    }
};

class Teacher {
public:
    string name;
    int age;

    void answer(Student& student) {
        if (student.answer() == false) {
            student.age += 10;
            student.moral = -99999;
        }
    }
};


int main() {
    Student student;
    student.name = "Vasya";
    student.age = 20;
    student.iq = 0;
    student.moral = 0;

    Teacher teacher;
    teacher.name = "Kirill";
    teacher.age = 52;

    teacher.answer(student);
    cout << student.moral;

    return 0;
}
