#include <iostream>

void fullNameFormat(const std::string& firstName, const std::string& lastName);
void diffNameFormat(const std::string& firstName, const std::string& lastName);

int main(void){

    std::string firstName;
    std::string lastName;

    std::cout << "Enter your first name: ";
    getline(std::cin, firstName);
    std::cout << std::endl;

    std::cout << "Enter your last name: ";
    getline(std::cin, lastName);
    std::cout << std::endl;

    fullNameFormat(firstName, lastName);
    diffNameFormat(firstName, lastName);


    return 0;
}

void fullNameFormat(const std::string& firstName, const std::string& lastName){
    std::cout << "Your full name is: " << firstName << " " << lastName << std::endl;
}

void diffNameFormat(const std::string& firstName, const std::string& lastName){
    std::cout << "Your name can also be written as: " << lastName << ", " << firstName << std::endl;
}

/*
 *
 * Ask the user to enter their first name and last name in main().
 * Pass those values to a function and produce the last two lines of output shown below:
 *
 * Output:
 * Enter your first name:      [user types: Mary Jo]
 * Enter your last name:        [user types: De Arazoza]
 *
 * Your full name is: Mary Jo De Arazoza
 * Your name can also be written as: De Arazoza, Mary Jo
 *
 * Notes and Hints:
 * 1) Both first and last names can contain a space. Hopefully, you remember which built-in function handles this issue.
 *
 */