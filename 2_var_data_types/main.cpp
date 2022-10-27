#include <iostream> //for io
#include <iomanip>  //to manipuate the io

int main()
{

    // lets learn about integers and initializers---------------------------------------->

    // braced initializers
    int var_1{2};
    // int try_decimal {3.4};
    // this will throw error since braced initializers doesn't allow this.
    // this is int to decimal converstion therefore their will be a loss in data.

    std::cout << "var_1 value :" << var_1 << std::endl;
    // std::cout<<"Try decimal value :"<<try_decimal<<std::endl;

    // functional initializers
    int var_2(3);
    int decimal_var_1(3.14);
    // int will ignore all the values after the decimal
    std::cout << "var_2 value :" << var_2 << std::endl;
    std::cout << "Try decimal_var_1 value :" << decimal_var_1 << std::endl; // o/p is just 3

    // assignment inittializers
    int var_3 = 6;
    int decimal_var_2 = 23.14;
    // int will ignore all the values after the decimal
    std::cout << "var_3 value :" << var_3 << std::endl;
    std::cout << "Try decimal_var_1 value :" << decimal_var_2 << std::endl; // o/p is just 23

    // Integer Modifier --------------------------------------------------------------------------------------------------------->
    // signed number can have both +ve and -ve numbers in range.
    signed int sign_var_1{10};
    signed int sign_var_2{-100};

    unsigned int unsign_var_1{10};
    // unsigned int unsign_var_2 {-100}; //this will throw error cause unsigned can only have positve numbers.

    /*
    range
    type with modifier         bytesin memory    Range

    unsigned int               4                 [0, 4294967295]
    signed int                 4                 [-2147483648, 2147483647]
    */

    // short and long modifier

    // regardless of what kind of int we have size is always 2 bytes.
    short short_var_1{10}; // 2 bytes of memory.
    short int short_int_var_1{20};
    signed short int sign_short_int_var_1{-1234};
    unsigned short int unsign_short_int_var_1{45};

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Size of short : " << sizeof(short_var_1) << std::endl;
    std::cout << "Size of short int : " << sizeof(short_int_var_1) << std::endl;
    std::cout << "Size of signed short int : " << sizeof(sign_short_int_var_1) << std::endl;
    std::cout << "Size of unsigned short int : " << sizeof(unsign_short_int_var_1) << std::endl;

    // IN long it is not necessary that the memory size will be 8 bytes in some system it can be of 4 bytes too so be CAREFUL.
    // Generally if you want 8 bytes than go for long long as shown section below the long section.
    long long_var_1{10}; // 4 or 8 bytes of memory.
    long int long_int_var_1{20};
    signed long sign_long_var_1{-134};
    signed long int sign_long_int_var_1{-1234};
    unsigned long int unsign_long_int_var_1{45};

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Size of long : " << sizeof(long_var_1) << std::endl;
    std::cout << "Size of long int : " << sizeof(long_int_var_1) << std::endl;
    std::cout << "Size of signed long : " << sizeof(sign_long_var_1) << std::endl;
    std::cout << "Size of signed long int : " << sizeof(sign_long_int_var_1) << std::endl;
    std::cout << "Size of unsigned long int : " << sizeof(unsign_long_int_var_1) << std::endl;

    long long long_long_var_1{10}; // always 8 bytes of memory.
    long long int long_long_int_var_1{20};
    signed long long sign_long_long_var_1{-134};
    signed long long int sign_long_long_int_var_1{-1234};
    unsigned long long int unsign_long_long_int_var_1{45};

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Size of long long : " << sizeof(long_long_var_1) << std::endl;
    std::cout << "Size of long long int : " << sizeof(long_long_int_var_1) << std::endl;
    std::cout << "Size of signed long long : " << sizeof(sign_long_long_var_1) << std::endl;
    std::cout << "Size of signed long long int : " << sizeof(sign_long_long_int_var_1) << std::endl;
    std::cout << "Size of unsigned long long int : " << sizeof(unsign_long_long_int_var_1) << std::endl;

    // Fractional  Modifier --------------------------------------------------------------------------------------------------------->

    /*
    range
    type with modifier         bytes in memory    Precision

    float                           4              7
    double                          8              15           (recommended by default to use)
    long double                     16             > double

    **note : precision is number of digit after the decimal ex : 1.23425542001
    */

    // by default c++  treats the decimal number as double in order specify which type of the
    //  decimal is present we add a suffix to the end of number 'f' means number is float and 'L' means num is long double.
    float float_num_1{1.77924589f};
    double double_num_1{1.3678469404742};
    long double long_double_num_1{1.37478262936946936393L};

    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << "Floating number : " << sizeof(float_num_1) << std::endl;
    std::cout << "Double number : " << sizeof(double_num_1) << std::endl;
    std::cout << "Long Double number : " << sizeof(long_double_num_1) << std::endl;

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << std::setprecision(20); // iomanip set precision upto 19 numbers after decimal.
    std::cout << "Floating number : " << float_num_1 << std::endl;
    std::cout << "Double number : " << double_num_1 << std::endl;
    std::cout << "Long Double number : " << long_double_num_1 << std::endl;

    // lets play with scientific notation of numbers.
    double science_num_1{1.23334e10};
    double science_num_2{1.200000003};
    double science_num_3{3.146e-11};
    double science_num_4{0.000000000003146};

    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << "science number 1 : " << science_num_1 << std::endl;
    std::cout << "science number 2 : " << science_num_2 << std::endl;
    std::cout << "science number 3 : " << science_num_3 << std::endl;
    std::cout << "science number 4 : " << science_num_4 << std::endl;

    // lets play with infinity and NaN.
    double temp_num_1{1.23334e10};
    double zero_num_2{};
    double zero_num_3{};

    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << "divide number 1 / zero_number 2 : " << temp_num_1 / zero_num_2 << std::endl;
    std::cout << "divide  0/0 : " << zero_num_2 / zero_num_3 << std::endl;

    // Boolean Magic of true and false --------------------------------------------------------------------------------------------------------->

    bool true_value{true};
    bool false_value{false};

    /*
    boolean takes upto 1 byte of memory.

    In normal std cout print the o/p will be -->
    1 --> 1 for true
    0 --> 0 for false

    inorder to print words we can use iomanip std::boolalpha
    */

    std::cout << "--------------------------------------------------------" << std::endl;

    // normal
    std::cout << "True value : " << true_value << std::endl;   // o/p : 1
    std::cout << "False value : " << false_value << std::endl; // o/p : 0

    // std::boolalpha
    std::cout << std::boolalpha;
    std::cout << "True value : " << true_value << std::endl;   // o/p : true
    std::cout << "False value : " << false_value << std::endl; // o/p : false

    // Characters And Text--------------------------------------------------------------------------------------------------------->

    /*
    character use 1 byte of memory.
    every character has an code value called ASCII
    ex: 'A' has code value of 65
    ** you can check ascii table online.
    */

    char character_1{'a'};
    char character_2{'r'};
    char character_3{'r'};
    char character_4{'o'};
    char character_5{'w'};

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << character_1 << std::endl;
    std::cout << character_2 << std::endl;
    std::cout << character_3 << std::endl;
    std::cout << character_4 << std::endl;
    std::cout << character_5 << std::endl;

    // lets try to store number value in char
    char num_char{65};
    char aplha_value{'B'};
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << num_char << std::endl;
    std::cout << static_cast<int>(num_char) << std::endl;    // o/p : 65
    std::cout << static_cast<int>(aplha_value) << std::endl; // o/p : 66

    // Auto --------------------------------------------------------------------------------------------------------->

    /*
    Auto is for dynamic type casting.
    let the compile deduce the type.
    */

    auto int_value{12};
    auto double_value{12.0};
    auto float_value{12.34f};
    auto long_value{123.0l};
    auto char_value{'a'};
    auto long_long_value{123ll};
    auto unsigned_value{123u};
    auto unsigned_long{456ul};

    // Assignment--------------------------------------------------------------------------------------------------------->

    /*
    let say we want to assign the auto var then reassigning the value
    with illegeal value will throw error.
    */

    auto unsign_int{123u};

    unsign_int = -23;
    // will store garbage value.
    std::cout << unsign_int << std::endl;

    return 0;
}