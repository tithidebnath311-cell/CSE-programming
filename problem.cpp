#include<iostream>
#include<string>
using namespace std;

class student {
private:
    int studentID;
    string studentName;
    double cgpa;
public:
    void setStudentID(int studentID) { this->studentID = studentID; }
    void setStudentName(string studentName) { this->studentName = studentName; }
    void setcgpa(double cgpa) { this->cgpa = cgpa; }

    int getStudentID() { return studentID; }
    string getStudentName() { return studentName; }
    double getcgpa() { return cgpa; }
};

int main() {
    student s1;
    s1.setStudentID(101);           
    s1.setStudentName("rahim");    
    s1.setcgpa(3.75);

    cout << "Student ID: " << s1.getStudentID() << endl;
    cout << "Student Name: " << s1.getStudentName() << endl;
    cout << "CGPA: " << s1.getcgpa() << endl;

    return 0; 
}