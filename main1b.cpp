/******************************************************************************

Ivana Lanzani - Test2
Question 1b

*******************************************************************************/
#include<iostream>

#include<string>

#include<stdlib.h>

using namespace std;

int Light = 50, Medium = 300, Heavy = 450;

int Fat = 1, Protein = 2;

void MealQuality(int convertedValue);

int main()

{

while (true)

{

int userInput, choice, convertedValue;

cout << "Please enter macro : " << endl;

cout << "Enter " << 1 << " -- convert from Fat to Calories" << endl;

cout << "Enter " << 2 << " -- convert from Protein to Calories" << endl;

cout << "Choice :";

cin >> choice;

switch (choice)

{

case 1:

cout << "Please enter grams of fat in meal : ";

cin >> userInput;

convertedValue = userInput * 9;

cout << "calories in this meal are " << convertedValue << endl;

MealQuality(userInput);

break;

case 2:

cout << "Please enter grams of protein in meal : ";

cin >> userInput;

convertedValue = userInput * 4;

cout << "calories in this meal are " << convertedValue << endl;

MealQuality(convertedValue);

break;

default:

cout << "Invalid Option" << endl;

exit(0);

break;

}

}

}

void MealQuality(int convertedValue)

{

string result;

convertedValue <= Light ? result = "Good Choice!" : "";

convertedValue > Light && convertedValue <= Medium ? result = "Eat in small portions" : "";

convertedValue > Medium && convertedValue <= Heavy ? result = "This meal is very heavy" : "";

convertedValue > Heavy ? result = "reduce intake" : "";

cout << result << endl;

}

