#include <iostream>
#include <iomanip>

int main()
{

    std::cout << "BASIC OPERATIONS ----------------------------------------------------------------------------------------------------------> " << std::endl
              << std::endl;

    int num_1{17};
    int num_2{3};

    int add_nums = num_1 + num_2;
    int subtr_nums = num_1 - num_2;
    int multi_nums = num_1 * num_2;
    int divide_nums = num_1 / num_2;
    int modolo_nums = num_1 % num_2;

    std::cout << " sum of nums :" << add_nums << std::endl;
    std::cout << " subtraction of nums :" << subtr_nums << std::endl;
    std::cout << " multiple of nums :" << multi_nums << std::endl;
    std::cout << " division of nums :" << divide_nums << std::endl;
    std::cout << " mod of nums :" << modolo_nums << std::endl;

    std::cout << "Precedence and Associativity ----------------------------------------------------------------------------------------------------------> " << std::endl
              << std::endl;

    /*
    sometimes we get multiple operators together which kind of make the calculation confusing but we have precedence and associativity to resolve this issue.

    Precedence : Which operation to do first
    Associativity : which direction or which order to calculate. from left or right. some operation evalulate from right other from right.

    you can check precedence table to see the order and associativity.
    link : https://www.programiz.com/cpp-programming/operators-precedence-associativity
    */

    // lets test. a+b*c-d/e-f+g
    int a{2};
    int b{1};
    int c{7};
    int d{5};
    int e{3};
    int f{6};
    int g{4};

    int result = a + b * c - d / e - f + g;

    std::cout << "Result 1 : " << result << std::endl;

    result = a / b * c + d - e + f;

    std::cout << "Result 2 : " << result << std::endl;

    std::cout << "Prefix/Postfix Increment & Decrement ----------------------------------------------------------------------------------------------------------> " << std::endl
              << std::endl;

    std::cout << "POSTFIX---------------------------->" << std::endl;
    int value = 5;
    // POSTFIX increment.
    std::cout << "The value is (POSTFIX++) : " << value++ << std::endl; // here postfix first value is printed then increased by 1
    std::cout << "The value is (after POSTFIX++) : " << value << std::endl;

    value = 5;
    // POSTFIX decrement.
    std::cout << "The value is (POSTFIX--) : " << value-- << std::endl;
    std::cout << "The value is (after POSTFIX--) : " << value << std::endl;

    std::cout << "PREFIX---------------------------->" << std::endl;
    value = 5;
    // prefix increment.
    std::cout << "The value is (prefix++) : " << ++value << std::endl; // prefix value is incremented then printed.
    std::cout << "The value is (after prefix++) : " << value << std::endl;

    value = 5;
    // prefix decrement.
    std::cout << "The value is (prefix--) : " << --value << std::endl;
    std::cout << "The value is (after prefix--) : " << value << std::endl;

    std::cout << "Compound Assignment Operators ----------------------------------------------------------------------------------------------------------> " << std::endl
              << std::endl;

    int value_2 = 34;

    // compound operators are

    value_2 += value; // sum compound operator
    value_2 -= value; // sub compound operator
    value_2 *= value; // multi compound operator
    value_2 /= value; // div compound operator
    value_2 %= value; // mod compound operator

    std::cout << "Output formatting ----------------------------------------------------------------------------------------------------------> " << std::endl;

        return 0;
}
