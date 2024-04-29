#include "MyForm.h"
#include "Header.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]





int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
    std::cout << "Login successful!\n";

    // Create Teachers
    Teacher seTeacher("Sir Tamim");

    // Create Students
    std::vector<Student*> students;
    for (int i = 1; i <= 5; i++) {
        students.emplace_back(new Student("Student " + std::to_string(i), i));
        seTeacher.addStudent(students.back());
    }

    // Create Rooms
    Room room1("4-17");
    Room room2("4-18");
    Room lab1("Lab 1");
    Room lab2("Lab 2");

    // Create Courses
    Course course1("CS 101", &seTeacher, &room1, 1, 2);
    Course course2("SE 101", &seTeacher, &room2, 3, 4);
    Course course3("SE 103", &seTeacher, &lab1, 5, 6);
    Course course4("SE 102", &seTeacher, &lab2, 7, 8);

    // Create Timetable and add Courses
    Timetable timetable;
    timetable.addCourse(&course1);
    timetable.addCourse(&course2);
    timetable.addCourse(&course3);
    timetable.addCourse(&course4);


    // Clean up dynamically allocated memory
    for (Student* student : students) {
        delete student;
    }

    return 0;

}