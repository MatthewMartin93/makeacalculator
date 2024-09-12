// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Matthew Martin
//Make a calculator
//9/12/2024
//Extra: Information about the Mercedes CLR GTR
#include <iostream>

double num1;
double num2;
std::string maybe;
int main()
{
    std::cout << "Hello\n";
    std::cout << "choose a number\n";
    std::cin >> num1;
    std::cout << "choose another number\n";
    std::cin >> num2;
    std::cout << "The numbers added are: " << num1 + num2 << "\n";
    std::cout << "The numbers subtracted are: " << num1 - num2 << "\n";
    std::cout << "The numbers multiplied are: " << num1 * num2 << "\n";
    std::cout << "The numbers divided are: " << num1 / num2 << "\n";
    std::cout << "The numbers using modulus are: " << (int)num1 % (int)num2 << "\n";
    std::cout << "The first number incremented is: " << num1++ << "\n";
    std::cout << "The second number incremented is: " << num2-- << "\n";
    std::cout << "Do you want some cool information?\n";
    std::cin >> maybe;
    std::cout << "No problem! Here's the information about the Mercedes CLR GTR:\n The Mercedes CLR GTR is a remarkable racing car celebrated for its outstanding performance and sleek\n design. Powered by a potent 6.0-liter V12 engine, it delivers over 600 horsepower.\n Acceleration from 0 to 100 km/h takes approximately 3.7 seconds, with a remarkable top speed surprising 320 km/h.\n Incorporating adventure aerodynamic features and cutting-edge stability technologies, the CLR GTR ensures \n exceptional stability and control, particularly during high-speed maneuvers.\n Originally priced at around $1.5 million, the Mercedes CLR GTR is considered one of the most exclusive and\n prestigious racing cars ever produced.\n Its limited production run of just five units adds to its rarity, making it highly sought after by racing enthusiasts\n and collectors worldwide.";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
