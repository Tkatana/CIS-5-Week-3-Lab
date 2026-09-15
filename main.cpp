

// Lab 3 — Tyler Quintana
// CIS 5 Week 03 · Types & variables
 
 #include <iostream>
#include <string>
int main() {
 

  const int CURRENT_YEAR = 2026;
  std::string first = "Tyler ";
  std::string last = "Quintana";
  int age = 28;
  double height = 5.10;
  char initial = 'T';
  bool student = 1; 

  std::cout << "=== About me ===\n";
  std::cout << "Name: " << first << last << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height: " << height << "\n";
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << student << "\n";
  std::cout << "Year: " << CURRENT_YEAR << "\n"; 
 
 
  // TODO: labeled prints from the variable names + CURRENT_YEAR

  return 0;
}
