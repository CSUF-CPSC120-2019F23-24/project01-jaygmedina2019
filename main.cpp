// Name:Juan Medina
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  //Variables to hold information from user
  std::string location;
  double days, hotel_expenses, meal_expenses, total_expenses;

  //Incoming Welcome Message
  std::cout << "Welcome to the business Trip Tracker!\n";

  //blank line showed in example
  std::cout << std::endl;

  //Ask user for the location
  std::cout << "what is the business trip location? ";
  std::cin >> location;

  //Ask the user for the days the trip took
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Ask the user for the hotel expenses
  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_expenses;

  //Ask the user for the meal expenses
  std::cout << "what is the meal expense?";
  std::cin >> meal_expenses;

  //Additional extra line needed to look lile example
  std::cout << std::endl;

  //Gather the total expenses
  total_expenses = hotel_expenses + meal_expenses;

  //print out the header with the data from the user
  std::cout << std::setw(12) << "Location"
    << std::setw(8) << "Days"
    << std::setw(9) << "Hotel"
    << std::setw(8) << "Meal"
    << std::setw(9) << "Total" << std::endl;

  std::cout << std::setw(12) << location
    << std::setw(8) << days
    << std::setw(9) << hotel_expenses
    << std::setw(8) << meal_expenses
    << std::setw(9) << total_expenses << std::endl;

  return 0;
}
