//intern Name -Rishabh Kumar 
//Codsoft 
#include <iostream>
#include <string>
#include <vector>
//import all the lib
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int numStu;
//enter the total no of students 
    cout << "Enter total number of students: ";
    cin >> numStu;
    //using a for loop
    for (int i = 0; i < numStu; ++i) {
        Student student;
        //enter the name 
        cout << "Enter name of student " << i + 1 << ": "<<endl;
        cin >> student.name;
        //enter the grade 
        cout << "Enter grade of student " << i + 1 << ": "<<endl;
        cin >> student.grade;
        students.push_back(student);
    }
    double sumOfGrad = 0.0;
    for (const auto& student : students) {
        sumOfGrad += student.grade;
    }
    double averageGrade = sumOfGrad / numStu;
     // fiding lowest grade 
     double lG = students[0].grade; //lG= Lowest Grade
    //finding highest grade
    double hG = students[0].grade; //hG=highest grade
    for (const auto& student : students) {
        hG = max(hG, student.grade);
        lG = min(lG, student.grade);
    }
    cout << "\nStudent Grades Summary:\n";
    for (const auto& student : students) {
        cout << student.name << ": " << student.grade << endl;
    }
//print the grades average ,highest and lowest
    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "hG: " << highestGrade << endl;
    cout << "lG: " << lowestGrade << endl;
//print the grades 
    
    return 0;
}
