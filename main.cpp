#include <iostream>

int main()
{
    int age;
    std::cout<< "Please enter your age: " << std::endl;
    std::cin >> age;

    std::cin.clear();// to clear the error, tell the buffer that everything is ok
    std::cin.ignore( 100000, '\n' ); //ignore the next amount of characters or until hit a new line

    std::string firstName;
    std::string lastName;
    std::cout<< "Please enter your name: " << std::endl;
    std::cin >> firstName;
    std::cin >> lastName;

    std::cout << "First & Last name: " << firstName << " " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;


    






    return 0;
}