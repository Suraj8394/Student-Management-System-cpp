# 🎓 Student Management System (C++)
A simple and interactive Student Management System built using C++, allowing users to add students, search for records, delete records, and view all student details through a menu-driven interface.

🚀 Features
✔️ Add new student records with name, roll number, and marks
✔️ Search for a student by roll number
✔️ Delete a student record permanently
✔️ View all stored student records
✔️ User-friendly menu-driven system

📂 Project Structure
📦 Student Management System
┣ 📜 student_management.cpp # Main source code
┣ 📜 students.txt # Data storage

# 🛠 How to Run the Program
1️⃣ Compile the Code
Use the following command to compile:

--- 

2️⃣ Run the Program

🛠 How It Works
1️⃣ Code Explanation
The program is based on C++ classes and file handling, where each student record is stored persistently in a text file. Below is a breakdown:


--- 

📌 Class: Student
This class represents an individual student and includes:

Private attributes:

name → Name of the student
rollNumber → Unique roll number
marks → Marks obtained
Public Methods:

inputDetails() → Takes user input for student details
displayDetails() → Displays student information

---

# 📌 Main Program (main() function)
Stores all student records in a students.txt file
Displays a menu for user interaction
Uses a while loop to continuously take user input
Processes adding, searching, deleting, and viewing student records


2️⃣ Example Usage
Step 1: Run the Program

=== Student Management System ===  
1. Add Student  
2. View Students  
3. Search Student  
4. Delete Student  
5. Exit  

Enter your choice: 1  
📌 Adding a Student
🔹 User Inputs:

mathematic

Enter Student Name: Alice  
Enter Roll Number: 101  
Enter Marks: 89  
✅ Output:


Student added successfully!
📌 Viewing All Students

Enter your choice: 2  
✅ Output:


=== Student Records ===  
Name: Alice | Roll No: 101 | Marks: 89  
📌 Searching a Student by Roll Number
🔍 User Input:

mathematic

Enter your choice: 3  
Enter Roll Number: 101  
✅ Output:


Student Found:  
Name: Alice | Roll No: 101 | Marks: 89  
📌 Deleting a Student Record
🗑 User Input:

mathematic

Enter your choice: 4  
Enter Roll Number: 101  
✅ Output:

nginx
Copy
Edit
Student deleted successfully!
📌 Exiting the Program

--- 

🤝 Contributing
Want to improve this project? Feel free to fork the repository and submit a pull request!

📧 Contact: surajpratap469@gmail.com

⭐ Support
If you found this project useful, please ⭐ star this repository! 🚀
