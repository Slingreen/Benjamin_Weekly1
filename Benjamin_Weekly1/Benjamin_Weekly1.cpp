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

// Different functions used throughout the code
void Task1();
void Task2();
void Task3();
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
                << "\t Q    Quits program\n";
}