// DroidCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


bool setupStopped = false;
std::string operation;

// This function takes the input given from the Equation Setup function and solves the equation.
void EquationSolving(std::string operation, double number1, double number2)
{
    double answer;

    // Does the basic math. 
    if (operation == "+") {
        answer = number1 + number2;
    }
    else if (operation == "-")
    {
        answer = number1 - number2;
    }
    else if (operation == "*")
    {
        answer = number1 * number2;
    }
    else
    {
        answer = number1 / number2;
    }

    if (answer == 69 || answer == 420) {
        std::cout << "  -----------------------------------------------------------------\n  ";
        std::cout << "The answer is: " << answer << "! " << "HAHA FUNNIE NUMBER!!!!!!! POGGERS!!!!\n";
        std::cout << "  -----------------------------------------------------------------\n\n  ";
        setupStopped = true;
    }
    else
    {
        std::cout << "  -----------------------------------------------------------------\n  ";
        std::cout << "The answer is: " << answer << "!\n";
        std::cout << "  -----------------------------------------------------------------\n\n  ";
        setupStopped = true;
    }
}

// This function takes the raw std::cin input and gets it prepared for use by the Equation Solving function.
void EquationSetup(std::string op)
{
    double num1, num2;
    setupStopped = false;
        
        // Interprets operator provided by player.
        if (op == "+")
        {
            std::cout << "  -----------------------------------------------------------------\n\n";
            std::cout << "  What would you like to add?\n\n  Number One: ";
            std::cin >> num1;
            std::cout << "\n  Number Two: ";
            std::cin >> num2;
            std::cout << "\n";
        }
        else if (op == "-")
        {
            std::cout << "  -----------------------------------------------------------------\n\n";
            std::cout << "  What would you like to subtract?\n\n  Number One: ";
            std::cin >> num1;
            std::cout << "\n  Number Two: ";
            std::cin >> num2;
            std::cout << "\n";
        }
        else if (op == "/")
        {
            std::cout << "  -----------------------------------------------------------------\n\n";
            std::cout << "  What would you like to divide?\n\n  Number One: ";
            std::cin >> num1;
            std::cout << "\n  Number Two: ";
            std::cin >> num2;
            std::cout << "\n";
        }
        else if (op == "*")
        {
            std::cout << "  -----------------------------------------------------------------\n\n";
            std::cout << "  What would you like to multiply?\n\n  Number One: ";
            std::cin >> num1;
            std::cout << "\n  Number Two: ";
            std::cin >> num2;
            std::cout << "\n";
        }
        else
        {

            std::cout << "  -----------------------------------------------------------------\n";
            std::cout << "  Invalid Operator. Please, try +, -, *, or /\n";
            std::cout << "  -----------------------------------------------------------------\n\n  ";
            setupStopped = true;

        }

        // If nothing goes in this function goes wrong, it will call the Equation Solving function and provide it the data it needs.
        if (!setupStopped)
        {
            EquationSolving(operation, num1, num2);
        }
}

int main()
{
    std::string password, operatorChosen;

    std::cout << "Welcome to the best calculator, to ever exist!\nPlease, enter your password: ";
    std::cin >> password;

    // Detects if the password entered is correct. If so, it proceeds to ask what operator you want. If not, it will end the program.
    if (password == "2653") {
        std::cout << "  -----------------------------------------------------------------\n";
        std::cout << "  Hello, User!\n  ----------------------------------------------------------------\n";
        std::cout << "  What type of problem would you like to solve? (+, -, *, or /)\n  ";
        std::cin >> operatorChosen;
        operation = operatorChosen;
        EquationSetup(operatorChosen);
        
    }
    else
    {
        std::cout << "  You're not the User! Shutting off...";
    }

    // Detects if the setup function has ended. If so, it will reset and proceed to ask what operator you want.
    while (setupStopped == true) {

        std::cout << "What type of problem would you like to solve? (+, -, *, or /)\n  ";
        std::cin >> operatorChosen;
        operation = operatorChosen;
        EquationSetup(operatorChosen);

    }
}
