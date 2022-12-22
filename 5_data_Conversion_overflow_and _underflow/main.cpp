#include <iostream>

int main()
{

    std::cout << "implicit data coversion ----------------------------------------------------------------------------------------------------------> " << std::endl;
    /*
        implicit data coversion - automatic data conversion done by the compiler.
        implicit coversion happens it convert smaller data type to largest data type. example int to double
        conversion guideline :
        (size)
        int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double.

        Note : small to large conversion only happens operations execpt the assignment operations.
        int x = 12.3; here the value will be large to small that is double to int.

    */

    double double_var_1{3.84};
    int int_var_1{120};

    double result_var_1 = double_var_1 + int_var_1; // here implicit conversion will happen first int will be converted to double the evaluated.
    auto result_var_2 = double_var_1 + int_var_1;   // implicit conversion happens and result will be double.

    // implicit conversion i assignment operation.
    int result_var_3 = double_var_1 + int_var_1;

    std::cout << "Result of double (implicit conversion) :  " << result_var_1 << " size : " << sizeof(result_var_1) << "(double)" << std::endl;
    std::cout << "Result of auto (implicit conversion) :  " << result_var_2 << " size : " << sizeof(result_var_2) << "(double)" << std::endl;
    std::cout << "Result of int (implicit conversion) :  " << result_var_3 << " size : " << sizeof(result_var_3) << "(int)" << std::endl;

    std::cout << std::endl
              << "explicit data coversion ----------------------------------------------------------------------------------------------------------> " << std::endl;

    /*
        happens when developer explicitly change the type of data.
        there are 3 ways to do that
        1. impicit cast
        2. static_cast
        3. c-type cast

        Note: c-type cast is not safe to use. generally it is recommended to use static_cast in cpp.
    */

    // implicit cast.......
    double double_var_2{23.756};
    int result_var_4 = double_var_1 + double_var_2;
    std::cout << "Result of implicit cast int (explicit conversion) :  " << result_var_4 << " size : " << sizeof(result_var_3) << "(int)" << std::endl;

    // static_cast...........
    int result_var_5 = static_cast<int>(double_var_1) + static_cast<int>(double_var_2); // op = 3 + 23 = 36
    int result_var_6 = static_cast<int>(double_var_1 + double_var_2);                   // op = 27 (ie - 3.84 + 23.756 = 27.596 = 27 in int)
    std::cout << "Result of static_cast int (explicit conversion) :  " << result_var_5 << " size : " << sizeof(result_var_5) << "(int)" << std::endl;
    std::cout << "Result of static_cast int (explicit conversion) :  " << result_var_6 << " size : " << sizeof(result_var_6) << "(int)" << std::endl;

    // c-type cast..........
    int result_var_7 = (int)(double_var_1 + double_var_2);
    std::cout << "Result of c-type int (explicit conversion) :  " << result_var_7 << " size : " << sizeof(result_var_7) << "(int)" << std::endl;

    std::cout << std::endl
              << "overflow and underflow ----------------------------------------------------------------------------------------------------------> " << std::endl;

    /*
        overflow happens when data is feed to varible is more than the range that data type is stored.
        ex : unsigned char range is 0 - 255 if we pass 256 to unsigned char then data will overflow cause it is beyond its range
        computer will store garbage value in that variable.
        this garbage value can be find :
        if data is beyond the range then the bits will flip and range will start again from beginning

        .... 254 255 256 257 258 ....
                      0   1   2  ....
        instead of 256 1 is stored inside variable.

        underflow happens when data is feed to varible is less than the range that data type is stored.
        ex : unsigned char range is 0 - 255 if we pass -1 to unsigned char then data will underflow cause it is beyond its range
        computer will store garbage value in that variable.
        this garbage value can be find :

        ... -3  -2  -1  0  1  2 .....
        ... 253 254 255
        instead of -1 255 will be stored


    */

    // overflow.........
    unsigned char un_char_var_1 = 123;
    unsigned char un_char_var_2 = 160;
    unsigned char un_char_var_3 = un_char_var_1 + un_char_var_2;
    unsigned char un_char_var_4 = 256; // throw warning.. warning: unsigned conversion from 'int' to 'unsigned char' changes value from '256' to '0' [-Woverflow]

    std::cout << "Result of overflow unsigned char :  expected(283) actual : " << static_cast<int>(un_char_var_3) << std::endl;
    std::cout << "Result of overflow unsigned char :  expected(256) actual : " << static_cast<int>(un_char_var_4) << std::endl;

    // underflow.........
    unsigned char un_char_var_5 = un_char_var_1 - un_char_var_2;
    unsigned char un_char_var_6 = -1;
    std::cout << "Result of overflow unsigned char :  expected(283) actual : " << static_cast<int>(un_char_var_5) << std::endl;
    std::cout << "Result of overflow unsigned char :  expected(256) actual : " << static_cast<int>(un_char_var_6) << std::endl;

    return 0;
}
