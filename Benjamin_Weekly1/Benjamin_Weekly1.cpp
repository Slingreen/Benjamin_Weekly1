/**********************************************************************************************************
 *      Weekly assignment
 *
 *      Some tasks about basic programming
 *
 *
 *  @file    Benjamin_Weekly1.CPP
 *  @author  Benjamin A.E. Darici
 */

#include <iostream>
#include <string>
#include <Windows.h>

// Different functions used throughout the code
void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void writeMenu();
char Read_Command(const char* c);

// A main code with a switch to let the user choose which task to use, a sort of main menu
int main()
{
    char command;

    writeMenu();
    command = Read_Command("Command");

    while (command != 'Q') 
    {
        std::cin.ignore(32767, '\n');
        switch (command)
        {
            case 'A': Task1(); break;
            case 'B': Task2(); break;
            case 'C': Task3(); break;
            case 'D': Task4(); break;
            case 'E': Task5(); break;
            default: writeMenu(); break;
        }
        command = Read_Command("Command");
    }
}

// Task 1 of the weekly assignment
void Task1()
{
    std::string name,
                birthday;
    char initial;
    int age;
    long phone;

    std::cout
        << "\nPlease enter the following:"
        << "\n\tFull name: ";
    std::getline(std::cin, name);
    std::cout
        << "\tInitial: ";
    std::cin >> initial;
    std::cin.ignore(32767, '\n');
    std::cout
        << "\tAge: ";
    std::cin >> age;
    std::cout
        << "\tPhone number: ";
    std::cin >> phone;
    std::cout
        << "\tBirthday (dd/mm/yy): ";
    std::cin >> birthday;

    std::cout
        << "\n--------------------"
        << "\n| Name     |" << name
        << "\n| Initial  |" << initial
        << "\n| Age      |" << age
        << "\n| Phone num|" << phone
        << "\n| Birthday |" << birthday
        << "\n--------------------\n";
}


// Task 2 of the weekly assignment
void Task2()
{
    std::string name;
    int age;
    char input;

    std::cout
        << "\nPlease enter the following:"
        << "\n\tYour name: ";
    std::getline(std::cin, name);
    std::cout
        << "\tAge: ";
    std::cin >> age;
    std::cout
        << "\tDo you drink coffe?(Y/n): ";
    std::cin >> input;
    std::cin.ignore(32767, '\n');

    std::cout
        << "Your name is " << name << ".\n\n"
        << "You are " << age << " years old.\n\n";
    
    if (toupper(input) == 'Y')
        std::cout << "You seem to like coffe.\n\n";
    else
        std::cout << "Oh, you don't like coffe.\n\n";
}


// Task 3 of the weekly assignment
void Task3()
{
    int age;
    std::cout
        << "\n\tPlease enter your age: ";
    std::cin >> age;
    if (age < 20)
        std::cout << "You are young.\n\n";
    else if (age <= 40)
        std::cout << "You are a grown up.\n\n";
    else if (age < 60)
        std::cout << "You are old.\n\n";
    else
        std::cout << "You ARE really old.\n\n";
}


// Task 4 of the weekly assignment
void Task4()
{
    int choice;
    std::cout
        << "\n\tWhat is your favourite drink?\n"
        << "\t\t 1. Coffe\n"
        << "\t\t 2. Tea\n"
        << "\t\t 3. Coca Cola\n"
        << "\t\t:  ";
    std::cin >> choice;
    switch (choice)
    {
        case 1: std::cout << "Coffe is delicous\n\n"; break;
        case 2: std::cout << "Tea gives peace of mind\n\n"; break;
        case 3: std::cout << "Coke will give you a white smile\n\n"; break;
        default: std::cout << "Oh, you have an other preferance? Okay then\n\n"; break;
    }
}


// Task 5 of the weekly assignment, honetly didnt quite get this one, is it really this simple?
void Task5()
{
    std::cout
        << "\n     1   2   3   4   5   6\n"
        << "    --- --- --- --- --- ---\n"
        << "A  : * : * : * : * : * : * :  A\n"
        << "    --- --- --- --- --- ---\n"
        << "B  : * : * : * : * : * : * :  B\n"
        << "    --- --- --- --- --- ---\n"
        << "C  : * : * : * : * : * : * :  C\n"
        << "    --- --- --- --- --- ---\n"
        << "D  : * : * : * : * : * : * :  D\n"
        << "    --- --- --- --- --- ---\n"
        << "     1   2   3   4   5   6\n\n";
}


// A tiny function just to read input commands
char Read_Command(const char* c)
{
    char command;
    std::cout << c << ":  ";
    std::cin >> command;
    return(toupper(command));
}

// A tiny function to write out the choices the switch provides in the main function
void writeMenu() 
{
    std::cout   << "The following commands are available: \n"
                << "\t A    Runs task 1\n"
                << "\t B    Runs task 2\n"
                << "\t C    Runs task 3\n"
                << "\t D    Runs task 3\n"
                << "\t E    Runs task 3\n"
                << "\t Q    Quits program\n";
}