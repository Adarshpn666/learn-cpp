#include <iostream>
//library used to convert to binary
#include <bitset>

int main()
{
    /* code */
     std::cout << std::endl
              << "Printing integer to binary (bitset) ----------------------------------------------------------------------------------------------------------> " << std::endl;

    short int int_var = 23;
    unsigned short bin_var = 0b1001100100;
    
    //here 16 is the size of the bits
    std::cout << std::bitset<16>(int_var) << std::endl;
    std::cout << std::bitset<16>(bin_var) << std::endl;

    
    short int right_shift_value = bin_var << 2;
    std::cout << std::bitset<16>(right_shift_value) << std::endl;

    std::cout << sizeof(bin_var) << std::endl;
    std::cout << sizeof(int_var) << std::endl;

    return 0;
}
