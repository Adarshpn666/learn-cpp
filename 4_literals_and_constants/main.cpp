#include <iostream>

// constinit------------------------------------------------------------------------->
const int const_var_2{33};
constexpr int constexpr_var_6{34};
int run_time_value{36};

constinit int constinit_var_1{88};        // constinit - initialize at compile time.
const constinit int constinit_var_2{346}; // constant constinit its value can't be changed. we can combine cost and constinit.
// constinit int constinit_var_3{run_time_value}; //this will throw error since constinit only store compile time values(const, constexpr) not run time values.
// constinit int constinit_var_4{constinit_var_1}; //this will throw error since constinit only store compile time values(const, constexpr) and constinit is not a constant value.
// constexpr constinit int constinit_var_5{34}; //this will throw error since constinit and constexpr doesnt combine together.

int main()
{
    std::cout << "Literals ----------------------------------------------------------------------------------------------------------> " << std::endl;

    // now literals are the data the are passed to the variables and store directly on the memory.
    // ex: 23 , "hello", 0xffffff, .....so on.

    // literal types -> define and help variable to know what type literal we are storing
    // ex -> suffix 'u' or 'U' is for unsigned data types
    //(note : suffix or prefix of literal types can captial or lower it doesn't matter)

    /*
        Note:
        bracket initialization is safe initialization it will throw error if right literal is not passed to variable therefore
        it is always recommended to use literal types when initializing using bracket.

        assignement and function initialization is not safe therefore it will not throw an error but can throw  a silent failure.
        since it either store garbage value or there is loss of data when initialize using these method.
    */
    // without bracket
    unsigned short assignement_initialize = -345;
    int assignement_int = 23.45;
    std::cout << "unsigned short in Assignment initialization : (expected : -345) actual : " << assignement_initialize << std::endl;
    std::cout << "int in Assignment initialization : (expected : 23.45) actual : " << assignement_int << std::endl;

    // it is highly recommed to use bracket initailization.

    short short_var{23};
    unsigned short un_short_var{23u}; // 'u' or 'U' indicate that the literal is of type unsigned.

    long long_var{2344l};                         //'l' is for
    unsigned long un_long_var{2343ul};            //'u' -> unsigned 'l' -> long
    long long long_long_var{2343LL};              //'ll'or 'LL' -> long long
    unsigned long long un_long_long_var{2343ull}; //'ull' -> unsigned long long

    std::cout << "Short value : " << short_var << std::endl;
    std::cout << "unsigned short value : " << un_short_var << std::endl;
    std::cout << "long value : " << long_var << std::endl;
    std::cout << "unsigned long value : " << un_long_var << std::endl;
    std::cout << "long long value : " << long_long_var << std::endl;
    std::cout << "unsigned long long value : " << un_long_long_var << std::endl;

    // c++ allows grouping numbers to make it more readable for programmer

    int grouping_number{1'00'000};
    std::cout << "Grouped number value : " << grouping_number << std::endl;

    // hexadecimal -> prefix - '0x'
    unsigned int hexa_value{0x22bu};
    int hexa_value_2{0x400};
    // lets see dec value
    std::cout << "unsigned int  value : (0x22bu) " << hexa_value << std::endl;
    std::cout << "int value : (0x400) " << hexa_value_2 << std::endl;
    // lets see hex value
    std::cout << std::hex;
    std::cout << "hex value :(0x22bu) " << hexa_value << std::endl;
    std::cout << "hex value :(0x400) " << hexa_value_2 << std::endl;
    std::cout << std::dec; // to change it to default

    // octal -> prefix - '0'
    int octal_value{0777}; // it is not 777 decimal value but 511 decimal value.
    std::cout << "int  value :(0777) " << octal_value << std::endl;

    // binary number - prefix - '0b'
    unsigned int binary_value{0b11111111u};
    std::cout << "int  value :{0b11111111u} " << binary_value << std::endl;

    char char_literal{'c'};
    float float_literal{3.24f}; // if 'f' not given then by default it will be double and error will thrown.
    std::string string_literal{"hello world"};
    std::cout << "char  value : " << char_literal << std::endl;
    std::cout << "float  value : " << float_literal << std::endl;
    std::cout << "string  value : " << string_literal << std::endl;

    std::cout << "Constants ----------------------------------------------------------------------------------------------------------> " << std::endl;
    /*
        constant is a variable that can be initialized but can't changed after it is initialized.
        Note : if const is declared then it must be initialized otherwise it will throw error.
    */
    const int age{20};
    std::cout << "Constant value Age : " << age << std::endl;

    // age = 55 //this will throw error
    // const int height; //this will also throw error (u need to initialize the const not just declare it.)

    std::cout << "Constants Expressions ----------------------------------------------------------------------------------------------------------> " << std::endl;

    // to improve performance of program some of the heavy computation is done during compilation instead of run time.
    // we use constexpr to do this computation during the compile time.
    // constexpr are const by natural u can't edit variable initailized using constexpr

    constexpr int constexpr_var_1{12}; // also const var
    constexpr double PI{3.14};         // const var

    std::cout << "constexpr value 1 : " << constexpr_var_1 << std::endl;
    std::cout << "PI value : " << PI << std::endl;

    // PI = 34.5; //this will throw error since constexpr is constant.

    int non_constexpr_value{34};

    // constexpr int constexpr_value_2 {non_constexpr_value}; //this will throw error since non const var can't be passed value to constexpr
    // since that var runs only at run time not at compile time

    constexpr int constexpr_var_3{12};
    constexpr int constexpr_var_4{constexpr_var_3}; // constexpr can be passed to constexpr
    const int const_var_1{134};
    constexpr int constexpr_var_5{const_var_1 * 3}; // const value can be passed to constexpr

    std::cout << "constexpr value 3 : " << constexpr_var_3 << std::endl;
    std::cout << "constexpr value 4 : " << constexpr_var_4 << std::endl;
    std::cout << "constexpr value 5 : " << constexpr_var_5 << std::endl;

    std::cout << "constinit ----------------------------------------------------------------------------------------------------------> " << std::endl;
    // through constinit we can initialize the var at compile time.
    // constinit can be only applied to variables with static or thread storage else outside main function.
    // constinit int constinit_var_6{24}; //this will throw error since constinit inside main is neither static nor thread storage.

    std::cout << "const_var_2 value  : " << const_var_2 << std::endl;
    std::cout << "constexpr_var_6 value  : " << constexpr_var_6 << std::endl;
    std::cout << "run_time_value value  : " << run_time_value << std::endl;
    std::cout << "constinit_var_1 value  : " << constinit_var_1 << std::endl;
    std::cout << "constinit_var_2 value  : " << constinit_var_2 << std::endl;

    return 0;
}
