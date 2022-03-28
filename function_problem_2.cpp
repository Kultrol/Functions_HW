#include <iostream>

using std::cout, std::cin, std::endl;

int subtract(int a, int b);

int main(void){
    int num1,num2;
    int result;

    cout << "Enter two integers (separated by a space) and this program will subtract them: ";
    cin >> num1 >> num2;
    cout << endl;

    result = subtract(num1, num2);

    cout << num1 << " - " << num2 << " = " << result << endl;

    return 0;
}

int subtract(int a, int b){
    int result = a - b;
    return result;
}

/*
 *
 * This is another easy exercise to test your knowledge of the fundamentals. In main(), ask the user to enter two integers.
 * Pass those two integers to a function that will subtract one number from another. This function must also output the answer to the user.
 * Output:
 * Enter two integers (separated by a space) and this program will subtract them:     [user enters: 5 7]
 * 5 - 7 = -2
 * Notes and Hints:
 * 1) From now on, you must use a function prototype for all programs that use functions. Don't expect me to ask for it in each exercise.
 */
