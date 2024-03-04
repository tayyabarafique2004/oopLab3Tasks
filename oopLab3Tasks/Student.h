//#pragma once
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
//
//class Student {
//private:
//    string name;
//    vector<int> grades;
//public:
//    // Constructor to initialize the student with a name
//    Student(const string& name) : name(name) {}
//
//    // Method to add a grade to the student's record
//    void addGrade(int grade) {
//        grades.push_back(grade);
//    }
//
//    // Method to calculate the average grade of the student
//    float calculateAverageGrade() const {
//        if (grades.empty()) {
//            cout << "no record found";
//            return 0;
//        }
//          
//        int sum = 0;
//        for (int grade : grades) {
//            sum += grade;
//        }
//        return static_cast<float>(sum) / grades.size();
//    }
//
//    // Method to display student information
//    void displayInfo() const {
//        cout << "Name: " << name << endl;
//        cout << "Grades: ";
//        for (int grade : grades) {
//            cout << grade << " ";
//        }
//        cout << endl;
//    }
//};