#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    void inputDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << " | Roll No: " << rollNumber << " | Marks: " << marks << endl;
    }
};

// Function to add a new student record
void addStudent() {
    ofstream file("students.txt", ios::app);
    Student s;
    s.inputDetails();
    file << s.name << " " << s.rollNumber << " " << s.marks << endl;
    file.close();
    cout << "Student added successfully!\n";
}

// Function to view all student records
void viewStudents() {
    ifstream file("students.txt");
    Student s;
    cout << "\n=== Student Records ===\n";
    while (file >> s.name >> s.rollNumber >> s.marks) {
        s.displayDetails();
    }
    file.close();
}

// Function to search for a student by roll number
void searchStudent(int roll) {
    ifstream file("students.txt");
    Student s;
    bool found = false;
    while (file >> s.name >> s.rollNumber >> s.marks) {
        if (s.rollNumber == roll) {
            cout << "Student Found:\n";
            s.displayDetails();
            found = true;
            break;
        }
    }
    file.close();
    if (!found) cout << "Student not found!\n";
}

// Function to delete a student record
void deleteStudent(int roll) {
    ifstream file("students.txt");
    ofstream temp("temp.txt");
    Student s;
    bool found = false;

    while (file >> s.name >> s.rollNumber >> s.marks) {
        if (s.rollNumber != roll) {
            temp << s.name << " " << s.rollNumber << " " << s.marks << endl;
        } else {
            found = true;
        }
    }
    file.close();
    temp.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Student deleted successfully!\n";
    else
        cout << "Student not found!\n";
}

int main() {
    int choice, roll;
    while (true) {
        cout << "\n=== Student Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) addStudent();
        else if (choice == 2) viewStudents();
        else if (choice == 3) {
            cout << "Enter Roll Number: ";
            cin >> roll;
            searchStudent(roll);
        }
        else if (choice == 4) {
            cout << "Enter Roll Number: ";
            cin >> roll;
            deleteStudent(roll);
        }
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        else cout << "Invalid choice! Try again.\n";
    }
    return 0;
}
