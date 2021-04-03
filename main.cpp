//Practice with Functions Student: yourName, Teacher: Dr_T
//10-15-2019 updated 10-16-2019 and 3-24-2020
#include "functions.h" //reference the header file 
#include <iomanip>
#include <iostream>

int main() 
{
  std::cout << std::fixed;
  std::cout << std::setprecision(4);

  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(43) + ";5m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
      cout << color; //change text to green 
     //cin >> option; //getline(cin,option); //get the entire line
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\nGoodbye. Hasta luego." << endl;
  return 0; 
}