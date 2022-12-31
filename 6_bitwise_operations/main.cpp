#include <iostream>
#include <iomanip>
// library used to convert to binary
#include <bitset>

int main()
{
    /* code */
    std::cout << std::endl
              << "Printing integer to binary (bitset) ----------------------------------------------------------------------------------------------------------> " << std::endl;

    short int int_var = 23;
    unsigned short bin_var = 0b1001100100;

    // here 16 is the size of the bits
    std::cout << std::bitset<16>(int_var) << std::endl;
    std::cout << std::bitset<16>(bin_var) << std::endl;

    std::cout << std::endl
              << "Shifting operations right and left ----------------------------------------------------------------------------------------------------------> " << std::endl;

    unsigned short int value = 2040;
    auto result = value << 1;

    // bit shift operation can't be done by data below 4 bytes so it implicit convert it into int type.
    std::cout << "lets check the size of unsigned short int : " << sizeof(value) << std::endl;
    std::cout << "lets check the size of auto after bit shift  : " << sizeof(result) << std::endl;

    // therefore we need to explicitly convert it.
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "bin : " << std::bitset<16>(value) << " dec : " << value << std::endl; // op : bin : 0000111111110000 dec : 4080

    value = static_cast<unsigned short int>(value << 1);
    std::cout << "bin : " << std::bitset<16>(value) << " dec : " << value << std::endl; // op : bin : 0001111111100000 dec : 8160

    value = static_cast<unsigned short int>(value << 3);                                // we can shift multiple bits at same time.
    std::cout << "bin : " << std::bitset<16>(value) << " dec : " << value << std::endl; // op : bin : 1111111100000000 dec : 65280

    /*
        as we can see that output is always multiple of 2^n (n is number bit to be shifted)
        4080 *2^1 = 8160
        8160 * 2^3 = 65280

        now we can see that 65280  = 1111111100000000 we can see that 1 is at end one more left shift we will start lossing the data

        65280 << 1 = 65024 we started lossing data this data can't be brought back even if we use right shift it is lost forever.

        65024 >> 1 = 32512 (which is 65024 / 2^1) same thing will happen with right shift once its one reach at end it will also start lossing data.

    */

    value = static_cast<unsigned short int>(value << 1);
    std::cout << "bin : " << std::bitset<16>(value) << " dec : " << value << std::endl; // bin : 1111111000000000 dec : 65024

    // right shift .......
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "bin : " << std::bitset<16>(value) << " dec : " << value << std::endl; // bin : 0111111100000000 dec : 32512

    // always use bracket with std cout if print shift operation directly.
    std::cout << "Shift operation : " << (value >> 1) << std::endl;

    std::cout << std::endl
              << "logical bitwise operations----------------------------------------------------------------------------------------------------------> " << std::endl;

    const int COLUMN_WIDTH{20};

    unsigned char value_1{0x3};
    unsigned char value_2{0x5};

    std::cout << "Value 1 : " << std::bitset<8>(value_1) << std::endl;
    std::cout << "Value 2 : " << std::bitset<8>(value_2) << std::endl;

    std::cout << "BITWISE AND operation ---->" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "(value_1 & value_2) : " << std::bitset<8>(value_1 & value_2) << std::endl;
    std::cout << std::endl;

    std::cout << "BITWISE OR operation ---->" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "(value_1 | value_2) : " << std::bitset<8>(value_1 | value_2) << std::endl;
    std::cout << std::endl;

    std::cout << "BITWISE NOT operation ---->" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "(~value_1) : " << std::bitset<8>(~value_1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "(~value_2) : " << std::bitset<8>(~value_2) << std::endl;
    std::cout << std::endl;

    std::cout << "BITWISE XOR operation ---->" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "(value_1 ^ value_2) : " << std::bitset<8>(value_1 ^ value_2) << std::endl;
    std::cout << std::endl;


    

    return 0;
}
