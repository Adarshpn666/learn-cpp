#include <iostream>
#include <iomanip>
#include <limits> //for checking the limits of numbers, decimals etc. for section numeric limits.
#include <cmath>  //for math function section.

int main()
{

    // before we make any changes to output stream lets store the default into ios var
    std::ios current_cout_state(nullptr);  // create var to store default
    current_cout_state.copyfmt(std::cout); // copy the state.

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

    std::cout << "endl ----------------> :" << std::endl;
    // endl -> give us newline. work same as '\n' but works differently internally.
    std::cout << "hello" << std::endl;
    std::cout << "world" << std::endl;

    std::cout << "flush ----------------> :" << std::endl;
    // flush -> flush out the data to the final destination.
    std::cout << "starting the flushing....." << std::endl
              << std::flush;

    std::cout << "setw() <iomanip> ----------------> :" << std::endl;
    // setw -> set the width of the text.
    std::cout << std::setw(10) << "hello" << std::endl;

    std::cout << "right and left ----------------> :" << std::endl;
    // right and left
    // right (default text format) -> starts with the right most side. ex = '     right'
    std::cout << std::right;
    std::cout << std::setw(10) << "good" << std::endl;

    // left -> starts with left side and fill rest remaining empty on right. ex = 'left     '
    std::cout << std::left;
    std::cout << std::setw(10) << "good" << std::endl;

    std::cout << "setfill <iomanip> ----------------> :" << std::endl;
    // setfill -> fill the empty spaces with characters
    std::cout << std::setfill('*');
    std::cout << std::setw(10) << "good" << std::endl;

    std::cout << "boolalpha and noboolalpha ----------------> :" << std::endl;

    // noboolalpha -> show boolean value as text rether than default 0 and 1.
    bool bool_value{true};
    std::cout << bool_value << std::endl;
    std::cout << std::boolalpha << bool_value << std::endl;
    std::cout << std::noboolalpha << bool_value << std::endl;

    std::cout << "showpos ----------------> :" << std::endl;

    // showpos --> shows +ve sign in +ve number
    std::cout << value_2 << std::endl;
    std::cout << std::showpos << value_2 << std::endl;
    std::cout << std::noshowpos << value_2 << std::endl;

    // dec , hex , oct --> these convert a number to its respective type.
    // remember these will not work on double or floating point numbers
    // dec -> decimal
    // hex -> hexadecimal
    // oct -> octal

    std::cout << "dec, hex and oct ----------------> :" << std::endl;

    int check_number = 717171;
    double check_number_2 = 4.56644;

    std::cout << "Integer hex value :" << std::hex << check_number << std::endl;
    std::cout << "double hex value :" << std::hex << check_number_2 << std::endl;

    std::cout << "Integer oct value :" << std::oct << check_number << std::endl;
    std::cout << "double oct value :" << std::oct << check_number_2 << std::endl;

    std::cout << "Integer dec value :" << std::dec << check_number << std::endl;
    std::cout << "double dec value :" << std::dec << check_number_2 << std::endl;

    std::cout << "showbase and uppercase ----------------> :" << std::endl;
    // showbase and uppercase
    // showbase will show the base of number
    std::cout << "hex value withpout base(default value) : " << std::hex << check_number << std::endl;
    std::cout << std::showbase;
    std::cout << "hex value with base : " << std::hex << check_number << std::endl;

    // uppercase will convert text into upper case
    std::cout << "hex value with base with uppercase : " << std::uppercase << check_number << std::endl;

    std::cout << "fixed ----------------> :" << std::endl;
    // fixed --> to show fixed value from a decimal value;
    double fixed_check = 12322232.3445678e-4;
    std::cout << "Default value : " << fixed_check << std::endl;
    std::cout << "fixed value : " << std::fixed << fixed_check << std::endl;

    std::cout << "setprecision <iomanip> ----------------> :" << std::endl;

    // setprecision -> number of digits after the decimal point. n-1 numbers after point.
    std::cout << "Default value : " << fixed_check << std::endl;
    std::cout << "setprecsion 4 value : " << std::setprecision(4) << fixed_check << std::endl;

    std::cout << "showpoint ----------------> :" << std::endl;
    // showpoint -> to show floating point format.

    // run after commenting the setprecision and fixed. or u can
    // restore the default state of cout;
    std::cout.copyfmt(current_cout_state); //------------------------------------------------Imp-------------------------------//

    std::cout << "default value(noshowpoint) : " << 12.0 << std::endl;
    std::cout << "showpoint : " << std::showpoint << 12.0 << std::endl;
    std::cout << std::noshowpoint << std::endl;

    // numeric limits.
    std::cout << "Numeric limits ----------------------------------------------------------------------------------------------------------> " << std::endl;

    // we have three limits min, max and lowest.
    // lowest is only for floating point numbers.

    // floating point numbers
    std::cout << "Lowest of floating point number : " << std::numeric_limits<double>::lowest() << std::endl;
    std::cout << "Min of floating point number : " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Max of floating point number : " << std::numeric_limits<double>::max() << std::endl;

    // intergers lowest and min are same.
    std::cout << "Lowest of floating point number : " << std::numeric_limits<int>::lowest() << std::endl;
    std::cout << "Min of floating point number : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Max of floating point number : " << std::numeric_limits<int>::max() << std::endl;

    std::cout << "Math Functions ----------------------------------------------------------------------------------------------------------> " << std::endl;
    // lets add #include<cmath>
    double weight = 7.73;
    int savings = -50000;
    std::cout << "floor --------- > " << std::endl; //(floor will ignore the decimal after the point. give closets lower value in this case op == 7 )
    std::cout << "floor weight : " << std::floor(weight) << std::endl;

    std::cout << "ceil --------- > " << std::endl; //(ceil will round off the value  and give the closets upper most integer value in this case op == 8)
    std::cout << "ceil weight : " << std::ceil(weight) << std::endl;

    std::cout << "abs --------- > " << std::endl; //(gives absolute value of number even it is -ve it will give +ve value..)
    std::cout << "abs weight : " << std::abs(weight) << std::endl;
    std::cout << "abs savings : " << std::abs(savings) << std::endl;

    std::cout << "exp --------- > " << std::endl; //(give the value of e ^ n here e is a mathematical constant whose value is 2.71828)
    std::cout << "EXP of 10 (e^10) (here e = 2.71828...)  : " << std::exp(10) << std::endl;

    std::cout << "pow --------- > " << std::endl;
    std::cout << "pow of  (3^10) : " << std::pow(3, 10) << std::endl;

    std::cout << "log --------- > " << std::endl;
    std::cout << "log of  (54.59) : " << std::log(54.59) << std::endl;     //(by default the log will give value of loge(n) {log base e solution} where e is mathematical constant )
    std::cout << "log10 of  (10000) : " << std::log10(10000) << std::endl; ///( this is for the log base 10 solution)

    std::cout << "sqrt --------- > " << std::endl;
    std::cout << "sqrt of  (9) : " << std::sqrt(9) << std::endl;

    std::cout << "round --------- > " << std::endl;
    std::cout << "round of  (3.654) : " << std::round(3.654) << std::endl;
    std::cout << "round of  (2.5) : " << std::round(2.5) << std::endl;
    std::cout << "round of  (3.4) : " << std::round(3.4) << std::endl;

    std::cout << "Weird Intgeral types ----------------------------------------------------------------------------------------------------------> " << std::endl;

    short int a1{23};
    short int a2{10};
    char a3{21};
    char a4{12};

    std::cout << "Size of short : " << sizeof(a1) << std::endl;
    std::cout << "Size of short : " << sizeof(a2) << std::endl; //2
    std::cout << "Size of char : " << sizeof(a3) << std::endl; //1
    std::cout << "Size of char : " << sizeof(a4) << std::endl; //1

    //by default cpp can't do arthmematic operations on data whose sixe is less than 4 bytes therefore it internally convert 
    //data to 4 byte before doing any arthematic operations.
    auto res1 = a1 + a2;
    auto res2 = a3 + a4;

    std::cout << "Size of res1 : " << sizeof(res1) << std::endl; //4
    std::cout << "Size of res2 : " << sizeof(res2) << std::endl; //4

    return 0;
}
