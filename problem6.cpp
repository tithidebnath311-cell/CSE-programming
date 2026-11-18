#include<iostream>
#include<string>
using namespace std;

class Course {
private:
    int courseId;
    string courseName;
public:
    void setCourseId(int courseId) { this->courseId = courseId; }
    void setCourseName(string courseName) { this->courseName = courseName; }
    int getCourseId() { return courseId; }
    string getCourseName() { return courseName; }
    virtual void displayCourseType() = 0;
    virtual ~Course() {}
};

class TheoryCourse : public Course {
public:
    void displayCourseType() { cout << "This is a Theory Course" << endl; }
};

class LabCourse : public Course {
public:
    void displayCourseType() { cout << "This is a Lab Course" << endl; }
};

int main() {
    Course *ptr;
    
    ptr = new TheoryCourse();
    ptr->setCourseId(101);
    ptr->setCourseName("OOP");
    cout << "ID: " << ptr->getCourseId() << ", Name: " << ptr->getCourseName() << endl;
    ptr->displayCourseType();
    delete ptr;
    
    ptr = new LabCourse();
    ptr->setCourseId(102);
    ptr->setCourseName("OOP Lab");
    cout << "ID: " << ptr->getCourseId() << ", Name: " << ptr->getCourseName() << endl;
    ptr->displayCourseType();
    delete ptr;
    
    return 0;
}