#include <iostream>
#include <vector>
#include <string>
#include"Task.h"
#include"ToDoList.h"


using namespace std;
int main() {


    ToDoList myList;

    // Add tasks
    myList.addTask("Finish Lab 3");
    myList.addTask("send email to dean");
    myList.addTask("go to market");

    // List tasks
    myList.listTasks();

    // Mark a task as completed
    myList.markTaskCompleted(0); // Mark "Finish Lab 3" as completed

    // List tasks after marking
    myList.listTasks();

    return 0;

}

//int main() {
//
//    studentManager sm;
//    sm.addStudent(1, "John Doe", 92.5);
//    sm.addStudent(2, "Jane Doe", 88.0);
//    sm.displayRecords();
//    sm.updateGrade(1, 95.0);
//    cout << "After grade update:" << endl;
//    sm.displayRecords();
//
//    return 0;
//}
//int main() {
//    Contacts contactManager;
//
//    // Adding contacts
//    contactManager.addContact("Tayyaba", "12347890");
//    contactManager.addContact("jerry", "09834567");
//    contactManager.addContact("lily", "09876543");
//
//    // Searching for a contact
//    contactManager.searchContact("Tayyaba");
//    contactManager.searchContact("lily");
//
//    // Displaying all contacts
//    contactManager.displayAllContacts();
//
//    return 0;
//
//}




//#include"Student.h"
//
//
//
//int main() {
//    Student student1("Tayyaba");
//    student1.addGrade(90);
//    student1.addGrade(85);
//    student1.addGrade(80);
//
//
//    Student student2("Jerry");
//    student2.addGrade(75);
//    student2.addGrade(80);
//    student2.addGrade(85);
//
//    cout << "Student 1:" << endl;
//    student1.displayInfo();
//    cout << "Average Grade: " << student1.calculateAverageGrade() << endl;
//
//    cout << "\nStudent 2:" << endl;
//    student2.displayInfo();
//    cout << "Average Grade: " << student2.calculateAverageGrade() << endl;
//
//    return 0;
//   
//}