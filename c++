#include <iostream>
#include <string>

class StudentProfile {
public:
    int id = 101;
};

class FacultyProfile {
public:
    int id = 999;
};

class TA {
public:
    // The TA doesn't "inherit" them, they "have" them.
    StudentProfile studentSide;
    FacultyProfile facultySide;
};

int main() {
    TA myTA;
    
    // Total clarity! No ambiguity.
    std::cout << "Student ID: " << myTA.studentSide.id << std::endl;
    std::cout << "Faculty ID: " << myTA.facultySide.id << std::endl;
    
    return 0;
}
Use Inheritance only when you need Polymorphism (e.g., you have a std::vector<Person*> and you want to call work() on every person, whether they are a Student or Faculty).

Use Composition for almost everything else. It is safer, it prevents the Diamond Problem, and it makes your code much easier to change later.
