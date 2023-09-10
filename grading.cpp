#include <bits/stdc++.h>

using namespace std;

class Student {
public:
  string name;
  double grade;
};

int main() {
  vector<Student> st;
  string name;
  double grade;
  char anotherStudents;
  cout << "Student Data Entry" << endl;
  do {
    cout << "Enter student  name: ";
    cin >> name;
    cout << "Enter student grade: ";
    cin >> grade;

    Student student;
    student.name = name;
    student.grade = grade;

    st.push_back(student);

    cout << "Want to add another student data ? (y/n): ";
    cin >> anotherStudents;
  } while (anotherStudents == 'y' || anotherStudents == 'Y');

  if (st.empty()) {
    cout << "No data entered" << endl;
    return 0;
  }
  cout << "\n<--------------------Student Details--------------------->:\n";
  cout << "Name "
       << "\t\t"
       << "Grades" << endl;
  for (const Student &student : st) {
    cout << student.name << "\t\t " << student.grade << endl;
  }
  double sum = 0.0;
  double highest = st[0].grade;
  double lowest = st[0].grade;

  for (const Student &student : st) {
    sum += student.grade;
    if (student.grade > highest) {
      highest = student.grade;
    }
    if (student.grade < lowest) {
      lowest = student.grade;
    }
  }

  double average = sum / st.size();

  cout << "\n<---------------Student Grades Summary------------------->\n";
  cout << "Average Grade of Student: " << average << endl;
  cout << "Highest Grade of Student: " << highest << endl;
  cout << "Lowest Grade of Student : " << lowest << endl;

  return 0;
}