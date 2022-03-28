#include <iostream>
#include <string>

bool checkingNum(int a, int b);
void subtractingNumber(int num1, int num2);


int main(void){

    bool userContinue = true;
    char userResponse;

    int num1, num2, result;


    do{
        std::cout << "Enter two integers (separated by a space) and this program will subtract the smaller from the larger: ";
        std::cin >> num1 >> num2;
        std::cout << std::endl;
        
        subtractingNumber(num1, num2);

        std::cout << "Do you want to run this program again? ";
        std::cin >> userResponse;
        std::cout << std::endl;
        
        if(toupper(userResponse) == 'N'){
            userContinue = false;
        }

    } while(userContinue);

    return 0;
}

void subtractingNumber(int num1, int num2){
    bool checkerNum;
    int temp, result;
    checkerNum = checkingNum(num1, num2);

    if(checkerNum){
        temp = num1;
        num1 = num2;
        num2 = temp;
    } // Swaps numbers

    result = num1 - num2;
    std::cout << num1 << " - " << num2 << " = " << result << std::endl;
}

bool checkingNum(int num1, int num2){
    if(num1 < num2){
        return true;
    } else {
        return false;
    }
}

/*
 *This is a twist on the previous exercise that will help you review loops and decision structures.
 * You will again ask the user to enter two numbers. However,
 * you will ALWAYS subtract the smaller number from the larger number to ensure that you never get a negative number for an answer.
 * You do this by checking the numbers and switching them if they are not in the right order (larger then smaller).
 * All of this checking, switching, subtracting, and output of the answer should occur in a function.
 * Finally, ask the user if they would like to run the program again. By now, you should know exactly what type of loop to use.
 *
 * Output:
 * Enter two integers (separated by a space) and this program will subtract the smaller from the larger:     [user enters: 7 5]
 * 7 - 5 = 2
 * Do you want to run this program again?      [user enters: y]
 * Enter two integers (separated by a space) and this program will subtract the smaller from the larger:     [user enters: 5 7]
 * 7 - 5 = 2
 * Do you want to run this program again?      [user enters: n]
 *
 * Notes and Hints:
 * 1) As always, make sure you accept an upper or lower case 'Y'
 */