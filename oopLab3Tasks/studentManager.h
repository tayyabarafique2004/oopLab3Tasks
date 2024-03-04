//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//struct Student {
//    int id;
//    string name;
//    float grade;
//    Student(int i, string n, float g) : id(i), name(n), grade(g) {}
//};
//class studentManager
//{
//private:
//    vector<Student*> records;
//public:
//    void addStudent(int id, string name, float grade) {
//        Student* newStudent = new Student(id, name, grade);
//        records.push_back(newStudent);
//    }
//
//    void updateGrade(int id, float newGrade) {
//        for (Student* student : records) {
//            if (student->id == id) {
//                student->grade = newGrade;
//                return;
//            }
//        }
//        cout << "Student ID not found." << endl;
//    }
//
//    void displayRecords() {
//        for (Student* student : records) {
//            cout << "ID: " << student->id << ", Name: " << student->name << ", Grade: " << student->grade << endl;
//        }
//    }
//
//    ~studentManager() {
//        for (Student* student : records) {
//            delete student;
//        }
//    }
//
//};
