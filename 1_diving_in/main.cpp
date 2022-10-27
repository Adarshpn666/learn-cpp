#include <iostream>

// remember function should be defined before the execution.
int find_sum(int a, int b)
{
    return a + b;
}

int main()
{

    // basic programming

    // data variables
    int number_1, number_2, sum;
    std::string name;

    // Types of stream ..
    /*
    std::cout << "Hello World" << std::endl;
    std::cerr << "Error : Something went Wrong" << std::endl;
    std::clog << "Log : execution logs." << std::endl;
    std::cout << "enter name: " << std::endl;
    std::cin >> name;

    std::cout << "Welcome " << name << " : " << std::endl;

    // learn about function....

    std::cout << "enter the number 1 :" << std::endl;
    std::cin >> number_1;

    std::cout << "enter the number 2 :" << std::endl;
    std::cin >> number_2;

    sum = find_sum(number_1, number_2);

    std::cout << "Sum is : " << sum << std::endl;
    */

    // input more then just a word.
    /*

    below code will only op as adarsh instead of adarsh p nair
    std::cout << "Enter full name : " << std::endl;
    std::cin >> full_name;
    std::cout << "Full using cin only : " << full_name << std::endl;
    */
    std::string full_name;
    std::cout << "Enter full name (again): " << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Full using getline() : " << full_name << std::endl;

    return 0;
}