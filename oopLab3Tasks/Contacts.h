//#pragma once
//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//class Contacts
//{
//private:
//    map<string, string> contacts;
//
//public:
//    // Method to add a contact
//    void addContact(const string& name, const string& phoneNumber) {
//        contacts[name] = phoneNumber;
//        cout << "Contact added: " << name << ", " << phoneNumber << endl;
//    }
//
//    // Method to search for a contact
//    void searchContact(const string& name) {
//        auto it = contacts.find(name);
//        if (it != contacts.end()) {
//            cout << "Contact found: " << it->first << ", " << it->second << endl;
//        }
//        else {
//            cout << "Contact not found for " << name << endl;
//        }
//    }
//
//    // Method to display all contacts
//    void displayAllContacts() {
//        if (contacts.empty()) {
//            cout << "No contacts available" << endl;
//        }
//        else {
//            cout << "All contacts:" << endl;
//            for (const auto& pair : contacts) {
//                cout << pair.first << ": " << pair.second << endl;
//            }
//        }
//    }
//};
//
