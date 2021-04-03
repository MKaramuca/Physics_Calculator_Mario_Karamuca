/* A header file to hold the 
main defintions of the program
Student: You
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include <string>
#include "Input_Validation_Extended.h"
#include <cmath> 
#include <stdlib.h>
using namespace std;

//put prototypes here
void handleOption(string); //function prototype 
void showMenu(); 
string proSolver(double, double);
//void userInput(char a, int num1, int num2, int num3, int num4, string unit1, string unit2)
void userInput(string, double, double, double, double, string, string);  
void showMenu2();
void getMinMax(double,double,double);  




//put definitions here
void handleOption(string userOption)
{

    string theUnits = "N/A", unitOne = "N/A", unitTwo = "N/A";
    if(userOption == "A" || userOption == "a")
    {
      double theDistance = 0.0;
      double theTime = 0.0;
      cout << "\nEnter the distance Traveled: ";
      theDistance = validateDouble(theDistance); //cin >> rows; 
      cout << "\nEnter the time it takes to travel the said distance: "; 
      theTime = validateDouble(theTime); //cin >> theCDouble;
      cout << "\nEnter the units used for distance: "; 
      unitOne = validateString(unitOne); //cin >> theUnits; 
      cout << "\nEnter the units used for time: "; 
      unitTwo = validateString(unitTwo); //cin >> theUnits; 

      //void userInput(char a, int num1, int num2, int num3, int num4, string unit1, string unit2)
      userInput(userOption, theDistance, theTime, 0, 0, unitOne, unitTwo);



    }
    else if(userOption == "B" || userOption == "b")
    {
      double theVelocity = 0.0;
      double theTime = 0.0;
      cout << "\nEnter the change in velocity: ";
      theVelocity = validateDouble(theVelocity); //cin >> rows; 
      cout << "\nEnter the amount of time it takes: "; 
      theTime = validateDouble(theTime); //cin >> theCDouble; 
      cout << "\nEnter the units used for velocity: "; 
      unitOne = validateString(unitOne); //cin >> theUnits; 
      cout << "\nEnter the units used for time: "; 
      unitTwo = validateString(unitTwo); //cin >> theUnits; 
      //taking both values, but assuming that the units for time are the same
      //could be calculated further if needed

      userInput(userOption, theVelocity, theTime, 0, 0, unitOne, unitTwo);


    }
    else if(userOption == "C" || userOption == "c")
    {
      showMenu2();
      string option = "N/A";
      bool b = false;

      do {
        
        cout << "\nPlease enter an option from the submenu: ";
        option = validateString(option);
        b = false;
        if(option == "Ma"){
          double vNot = 0.0, theAccel = 0.0, t = 0.0;
          cout << "\nEnter the initial velocity: ";
          vNot = validateDouble(vNot); //cin >> rows; 
          cout << "\nEnter the acceleration: "; 
          theAccel = validateDouble(theAccel); //cin >> theCDouble;
          cout << "\nEnter the time duration: "; 
          t = validateDouble(t); //cin >> theCDouble; 
          cout << "\nEnter the expected units for the results: "; 
          unitOne = validateString(unitOne); //cin >> theUnits; 

          userInput(option, vNot, theAccel, t, 0, unitOne, "Null");

        }
        else if (option == "Ms"){
          double sNot = 0.0, vNot = 0.0, theAccel = 0.0, t = 0.0;
          cout << "\nEnter the initial displacement: ";
          sNot = validateDouble(sNot); //cin >> rows;
          cout << "\nEnter the initial velocity: "; 
          vNot = validateDouble(vNot); //cin >> theCDouble; 
          cout << "\nEnter the Acceleration: ";
          theAccel = validateDouble(theAccel); //cin >> rows; 
          cout << "\nEnter the time duration: "; 
          t = validateDouble(t); //cin >> theCDouble; 
          cout << "\nEnter the expected units for the results: "; 
          unitOne = validateString(unitOne); //cin >> theUnits; 

          userInput(option, sNot, vNot, theAccel, t, unitOne, "Null");
        }
        else if (option == "Mv2"){
          double vNot = 0.0, sNot = 0.0, theAccel = 0.0, s = 0.0;
          cout << "\nEnter the initial velocity: ";
          vNot = validateDouble(vNot); //cin >> rows; 
          cout << "\nEnter the acceleration: "; 
          theAccel = validateDouble(theAccel); //cin >> theCDouble; 
          cout << "\nEnter the final displacement: ";
          s = validateDouble(s); //cin >> rows; 
          cout << "\nEnter the initial displacement: "; 
          sNot = validateDouble(sNot); //cin >> theCDouble;  
          cout << "\nEnter the expected units for the results: "; 
          unitOne = validateString(unitOne); //cin >> theUnits; 
          

          userInput(option, vNot, theAccel, s, sNot, unitOne, "Null");

        }
        else if (option == "Mv"){
          double vNot = 0.0, v = 0.0;
          cout << "\nEnter the initial velocity: ";
          vNot = validateDouble(vNot); //cin >> rows; 
          cout << "\nEnter the final velocity: "; 
          v = validateDouble(v); //cin >> theCDouble; 
          cout << "\nEnter the expected units for the results: "; 
          unitOne = validateString(unitOne); //cin >> theUnits; 
          

          userInput(option, vNot, v, 0, 0, unitOne, "Null");

        }
        else{
          cout  << "\nInvlaid input, try again\n";
          b = true;
        }
      }while(b);
    }
    else if(userOption == "D" || userOption == "d")
    { 
      double theMass = 0.0, theAccel = 0.0;
      cout << "\nEnter the mass: ";
      theMass = validateDouble(theMass); //cin >> rows
      cout << "\nEnter the acceleration:"; 
      theAccel = validateDouble(theAccel); //cin >> theCDouble;
      cout << "\nEnter the units used for Mass: "; 
      unitOne = validateString(unitOne); //cin >> theUnits; 
      cout << "\nEnter the units used for acceleration: "; 
      unitTwo = validateString(unitTwo); //cin >> theUnits; 

      userInput(userOption, theMass, theAccel, 0, 0, unitOne, unitTwo);



    }
    else if(userOption == "G" || userOption == "g")
    { 
      double theMass = 0.0, theGravity = 0.0;
      cout << "\nEnter the mass: ";
      theMass = validateDouble(theMass); //cin >> rows; 
      cout << "\nEnter the value for gravity:"; 
      theGravity = validateDouble(theGravity); //cin >> theCDouble; 
      cout << "\nEnter the units for the expected results: "; 
      unitOne = validateString(unitOne); //cin >> theUnits; 

      userInput(userOption, theMass, theGravity, 0, 0, unitOne, "null");


    }
    else if(userOption == "F" || userOption == "f")
    { 
      double theMass = 0.0, theVelocity;
      cout << "\nEnter the mass: ";
      theMass = validateDouble(theMass); //cin >> rows; 
      cout << "\nEnter the velocity:"; 
      theVelocity = validateDouble(theVelocity); //cin >> theCDouble; 
      cout << "\nEnter the units for the expected resulst: "; 
      unitOne = validateString(unitOne); //cin >> theUnits; 
 

      userInput(userOption, theMass, theVelocity, 0, 0, unitOne, "null");

    }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "E" || userOption == "e")
    {
      //char answer = '\0';
      cout << "\nYou have chosen to exit, End program. Hasta la vista, Baby!!" << endl;
      
    }

}

void showMenu()
{
  cout << "\033[1;33mMENU\033[0m\n";
  cout << "\033[1;33mA: Velocity\033[0m\n";
  cout << "\033[1;33mB: Acceleration\033[0m\n";
  cout << "\033[1;33mC: Motion\033[0m\n";
  cout << "\033[1;33mD: Newton's Second Law\033[0m\n";
  cout << "\033[1;33mE: Exit\033[0m\n";
  cout << "\033[1;33mF: Momentum\033[0m\n";
  cout << "\033[1;33mG: Weight (Earth)\033[0m\n";
  cout << "\033[1;33mX: clear the screen\033[0m\n";
 
}
void showMenu2()
{
  cout << "\033[1;36mSUBMENU\033[0m\n";
  cout << "\033[1;36mMa: Solve for v\033[0m\n";
  cout << "\033[1;36mMs: solve for s\033[0m\n";
  cout << "\033[1;36mMv2: solve for v^2\033[0m\n";
  cout << "\033[1;36mMv: solve for v_bar(average)\033[0m\n";
}

//definintion 
string probSolver(double d, double t)
{
   double dt = d / t;
   string value = to_string(dt);
   return value;
}

void userInput(string a, double num1, double num2, double num3, double num4, string unit1, string unit2)
{
  cout << "\n\033[1;31mUSER INPUT\n\033[0m\n";

  if(a == "a" || a == "A")
  {
    cout << "Change in distance: " << num1 << unit1 << endl;
    cout << "Time taken: " << num2 << unit2 << endl;
    
    double answer = num1 / num2;
    string unit3 = unit1 + " / " + unit2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nds / dt = V" << endl;
    cout << num1 << unit1 << " / " << num2 << unit2 << " = " << answer << unit3 << "\n" << endl;

  }
  if(a == "b" || a == "B")
  {
   cout << "Change in velocity: " << num1 << unit1 << endl;
    cout << "Time taken: " << num2 << unit2 << endl;
    
    double answer = num1 / num2;
    string unit3 = unit1 + "*" + unit2;

    cout << "\nANSWER: " << endl;
    cout << "\ndv / dt = V" << endl;
    cout << num1 << unit1 << " / " << num2 << unit2 << " = " << answer << unit3 << "\n" << endl; 
  }

  if(a == "Ma")
  {
    cout << "Initial Velocity: " << num1 << endl;
    cout << "Acceleration: " << num2 << endl;
    cout << "time: " << num3 <<  endl;
    
    double answer = num1 + num2 * num3;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nV_0 + a * t = v" << endl;
    cout << num1 << " + " << num2 << " * " << num3 << " = " << answer << unit1 << "\n" << endl;
    
  }

  if(a == "Ms")
  {
    cout << "Initial displacememnt: " << num1 << endl;
    cout << "Initial velocity: " << num2 << endl;
    cout << "Acceleration: " << num3 << endl;
    cout << "Time: " << num4 << endl;
    
    double answer = num1 + (num2 * num4) + ((num3 * pow(num4, 2)) /2);
    string unit3 = unit1 + "*" + unit2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nS_0 + V_0 * t + a * t^2 / 2 = s" << endl;
    cout << num1 << " + " << num2 << " * " << num3 << " + " << num4 << " * " << num3 << "^2 / 2 = " << answer << endl;
  }

  if(a == "Mv2")
  {
    cout << "Initial Velocity: " << num1  << endl;
    cout << "Acceleration: " << num2  << endl;
    cout << "Final displacememnt: " << num3  << endl;
    cout << "Initial displacememnt: " << num4  << endl;
    
    double answer = (num1 * num1) + 2 * num2 * (num3 - num4);
    

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nV_0^2 + 2 * a * (S-S_0) = v^2" << endl;
    cout << num1 << unit1 << " / " << num2 << unit2 << " = " << answer << unit1 << "\n" << endl;
  }

  if(a == "Mv")
  {
    cout << "Initial Velocity: " << num1 << unit1 << endl;
    cout << "Final Velocity: " << num2 << unit1 << endl;
    
    double answer = (num1 + num2) / 2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\n.5 * (V + V_0) = V_bar" << endl;
    cout << ".5 * (" << num2 << " + " << num1 << ") = " << answer << unit1 << "\n" << endl;
  }

  if(a == "D" || a == "d")
  {
    cout << "Mass: " << num1 << unit1 << endl;
    cout << "Acceleration: " << num2 << unit2 << endl;
    
    double answer = num1 * num2;
    string unit3 = unit1 + " * " + unit2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nm * a = F" << endl;
    cout << num1 << unit1 << " * " << num2 << unit2 << " = " << answer << unit3 << "\n" << endl;

  }
  if(a == "G" || a == "g")
  {
    cout << "Mass: " << num1 << endl;
    cout << "Gravity: " << num2 << endl;
    
    double answer = num1 * num2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nm * g = W" << endl;
    cout << num1 <<  " * " << num2  << " = " << answer << unit1 << "\n" << endl;
    
  }
  if(a == "F" || a == "f")
  {
    cout << "Mass: " << num1  << endl;
    cout << "velocity: " << num2  << endl;
    
    double answer = num1 * num2;

    cout << "\n\033[1;34mANSWER\033[0m\n";
    cout << "\nm * v = P" << endl;
    cout << num1 <<  " * " << num2  << " = " << answer << unit1 << "\n" << endl;
    //didn't use append function as we aren't storing/returning in this case. Took append as add on to end instead of c++ function meaning
    
  }
  
}


#endif