#include "student.h"

// Constructors
Student::Student() {
  f_name = "";
  l_name = "";
  this->grade = 0;
  phone = "";
  address = "";
}

Student::Student(string fname, string lname, int grade, string phone_num, string address) 
{
  f_name = fname;
  l_name = lname;
  this->grade = grade;
  address = address;
  
  // Print phone number in appropriate format
  string ph_num;
  for (int i=0; i<phone_num.size(); ++i) {
    if (i == 2 || i == 5) {
      ph_num += phone_num[i];
      ph_num += "-";
    } else {
      ph_num += phone_num[i];
    }
  }
  phone = ph_num;
}

// Methods
// TODO: Separate method logic with program logic
void Student::PrintStudentInfo() 
{
  cout << "\n|----------[Student]----------|\n";
  cout << "First Name: " << f_name << endl;
  cout << "Last Name: " << l_name << endl; 
  cout << "Student Grade: " << grade << endl;
  cout << "Phone Number: " << phone << endl;
  cout << "Address: " << address << endl;
}

void Student::setName() 
{
  cout << "Edit:\n1. First name\n2.Last Name" << endl;
  int input;
  cin >> input;
  if (input == 1) {
    cout << "Enter name: ";
    string first_name;
    cin >> first_name;
    // Change first name
    f_name = first_name;
  } else {
    cout << "Enter name: ";
    string last_name;
    cin >> last_name;
    // Change last name
    l_name = last_name;
  }
}

void Student::setGrade() 
{ 
  cout << "Enter grade: ";
  int new_grade;
  grade = new_grade; 
}

void Student::setPhoneNumber() 
{
  cout << "Enter new phone number: ";
  string new_phone_who_dis;
  cin >> new_phone_who_dis;
  phone = new_phone_who_dis;
}

void Student::setAddress() 
{
  cout << "Enter new address: ";
  string new_address;
  cin >> new_address;
  address = new_address;
}
