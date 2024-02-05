#include <iostream>
#include <string>

class Course {
public:
    std::string course_code;
    std::string course_name;
};

class Grade {
public:
    int mark;
    char the_grade;
};

class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;

    Student(const std::string& reg_num, const std::string& student_name, int student_age,
            const std::string& course_code, const std::string& course_name, int mark) {
        registration_number = reg_num;
        name = student_name;
        age = student_age;
        course.course_code = course_code;
        course.course_name = course_name;
        grades.mark = mark;

        if (grades.mark > 69)
            grades.the_grade = 'A';
        else if (grades.mark > 59)
            grades.the_grade = 'B';
        else if (grades.mark > 49)
            grades.the_grade = 'C';
        else if (grades.mark > 39)
            grades.the_grade = 'D';
        else
            grades.the_grade = 'E';
    }

    void displayDetails() {
        std::cout << "Registration Number: " << registration_number << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Course Code: " << course.course_code << "\n";
        std::cout << "Course Name: " << course.course_name << "\n";
        std::cout << "Mark: " << grades.mark << "\n";
        std::cout << "Grade: " << grades.the_grade << "\n";
    }
};

int main() {
    Student student("12345", "John Doe", 20, "CS101", "Introduction to Computer Science", 75);

    student.displayDetails();

    return 0;
}
