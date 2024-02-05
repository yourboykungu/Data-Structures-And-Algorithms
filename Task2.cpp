#include <iostream>
#include <string>

struct Course {
    std::string course_code;
    std::string course_name;
};

struct Grade {
    int mark;
    char the_grade;
};

struct Student {
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;
};

int main() {
    Student student;

    student.registration_number = "328405";
    student.name = "Cleophas Nyangumi";
    student.age = 20;
    student.course.course_code = "CS101";
    student.course.course_name = "Introduction to Computer Science";
    student.grades.mark = 75;

    if (student.grades.mark > 69)
        student.grades.the_grade = 'A';
    else if (student.grades.mark > 59)
        student.grades.the_grade = 'B';
    else if (student.grades.mark > 49)
        student.grades.the_grade = 'C';
    else if (student.grades.mark > 39)
        student.grades.the_grade = 'D';
    else
        student.grades.the_grade = 'E';

    std::cout << "Registration Number: " << student.registration_number << "\n";
    std::cout << "Name: " << student.name << "\n";
    std::cout << "Age: " << student.age << "\n";
    std::cout << "Course Code: " << student.course.course_code << "\n";
    std::cout << "Course Name: " << student.course.course_name << "\n";
    std::cout << "Mark: " << student.grades.mark << "\n";
    std::cout << "Grade: " << student.grades.the_grade << "\n";

    return 0;
}
