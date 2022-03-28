#include <iostream>

void programOne(void);
void programTwo(void);

int main() {
    std::cout << "This is the first part of my program." << std::endl;
    programOne();
    std::cout << "This is the second part of my program." << std::endl;
    programTwo();
    return 0;
}

void programOne(void){
    std::cout << "It was created with a function." << std::endl;
    std::cout << std::endl;
}

void programTwo(void){
    std::cout << "It was created with a different function." << std::endl;
}

/*
 *Create two functions (with appropriate names) that produce the output below. Both functions must use a prototype.
 * All that should be present in main() is the call to these two functions and a blank line of output between the function calls.

 This is a very easy exercise. Focus on the fundamentals. Make sure you review my solution file to make sure your syntax and name choice is good.

 Output:
This is the first part of my program.

It was created with a function.              <-- These two lines are output by the first function



This is the second part of my program.

It was created with a different function.          <-- These two lines are output by the second function
*/

