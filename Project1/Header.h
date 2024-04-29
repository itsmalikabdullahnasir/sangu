#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace Microsoft::VisualBasic;


class Teacher;
class Student;

class Teacher {
public:
    Teacher(std::string name) : name(name) {}
    std::string getName() const { return name; }
    void addStudent(Student* student);
    const std::vector<Student*>& getStudents() const { return students; }
private:
    std::string name;
    std::vector<Student*> students;
};

class Student {
public:
    Student(std::string name, int section) : name(name), section(section) {}
    std::string getName() const { return name; }
    int getSection() const { return section; }
private:
    std::string name;
    int section;
};

void Teacher::addStudent(Student* student) {
    students.push_back(student);
}

class Room {
public:
    Room(std::string name) : name(name) {}
    std::string getName() const { return name; }
private:
    std::string name;
};

class Course {
public:
    Course(std::string name, Teacher* teacher, Room* room, int startTime, int endTime)
        : name(name), teacher(teacher), room(room), startTime(startTime), endTime(endTime) {}
    std::string getName() const { return name; }
    Teacher* getTeacher() const { return teacher; }
    Room* getRoom() const { return room; }
    int getStartTime() const { return startTime; }
    int getEndTime() const { return endTime; }
private:
    std::string name;
    Teacher* teacher;
    Room* room;
    int startTime;
    int endTime;
};

class Timetable {
public:
    void addCourse(Course* course) { courses.push_back(course); }
    void printTeacherWiseTimeTable() const;
    void printSectionWiseTimeTable() const;
    void printStudentWiseTimeTable() const;
    void printRoomWiseTimeTable() const;
    void printLabWiseTimeTable() const;
    void queryTeacherOnTime(int time) const;
    void queryTimeTableForDay(int day) const;
    void writeToFile(const std::string& filename) const;
private:
    std::vector<Course*> courses;
};


void Timetable::printSectionWiseTimeTable() const {
    std::cout << "Section Wise Time Table:\n";
    for (const auto& course : courses) {
        for (const auto& student : course->getTeacher()->getStudents()) {
            if (student->getSection() == course->getStartTime()) {
                std::cout << student->getName() << " - " << course->getName() << " - "
                    << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
                    << course->getEndTime() << "\n";
            }
        }
    }
}

void Timetable::printStudentWiseTimeTable() const {
    std::cout << "Student Wise Time Table:\n";
    for (const auto& course : courses) {
        for (const auto& student : course->getTeacher()->getStudents()) {
            std::cout << student->getName() << " - " << course->getName() << " - "
                << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
                << course->getEndTime() << "\n";
        }
    }
}

void Timetable::printRoomWiseTimeTable() const {
    std::cout << "Room Wise Time Table:\n";
    for (const auto& course : courses) {
        std::cout << course->getName() << " - " << course->getTeacher()->getName() << " - "
            << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
            << course->getEndTime() << "\n";
    }
}

void Timetable::printLabWiseTimeTable() const {
    std::cout << "Lab Wise Time Table\n";
    for (const auto& course : courses) {
        if (course->getRoom()->getName() == "Lab 1" || course->getRoom()->getName() == "Lab 2") {
            std::cout << course->getName() << " - " << course->getTeacher()->getName() << " - "
                << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
                << course->getEndTime() << "\n";
        }
    }
}

void Timetable::queryTeacherOnTime(int time) const {
    std::cout << "Courses being taught at time " << time << ":\n";
    for (const auto& course : courses) {
        if (course->getStartTime() <= time && course->getEndTime() >= time) {
            std::cout << course->getName() << " - " << course->getTeacher()->getName() << " - "
                << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
                << course->getEndTime() << "\n";
        }
    }
}

void Timetable::queryTimeTableForDay(int day) const {
    std::cout << "Courses for day " << day << ":\n";
    for (const auto& course : courses) {
        if (course->getStartTime() == day) {
            std::cout << course->getName() << " - " << course->getTeacher()->getName() << " - "
                << course->getRoom()->getName() << " - " << course->getStartTime() << " - "
                << course->getEndTime() << "\n";
        }
    }
}
