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

    std::cout << std::endl
              << "Compound bitwise and assignment operators----------------------------------------------------------------------------------------------------------> " << std::endl;

    /*
        >>= , <<=, |=, &=, ^=
    */

    unsigned char test_value_1{0b00001100};

    std::cout << std::setw(COLUMN_WIDTH) << "value before any operations:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;
    test_value_1 &= 0b00001111;
    std::cout << std::setw(COLUMN_WIDTH) << "compound AND operator:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;
    test_value_1 |= 0b00001111;
    std::cout << std::setw(COLUMN_WIDTH) << "compound OR operator:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;
    test_value_1 ^= 0b10101101;
    std::cout << std::setw(COLUMN_WIDTH) << "compound XOR operator:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;
    test_value_1 <<= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "compound left shift operator:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;
    test_value_1 >>= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "compound right shift operator:" << std::setw(COLUMN_WIDTH) << std::bitset<8>(test_value_1) << std::endl;

    std::cout << std::endl
              << "Bitwise MASK----------------------------------------------------------------------------------------------------------> " << std::endl;

    /*
        Mask is way to highlight or shadow bits in a byte.
        lets say we want an 5th bit in bin {00011000}
        we can do -->
            bin : 00011000
           mask : 00010000  by this way we can mask 5th position in bin.

        lets create mask for different position.
    */
    const unsigned char mask_0{0b00000001}; // at pos 1
    const unsigned char mask_1{0b00000010}; // at pos 2
    const unsigned char mask_2{0b00000100}; // at pos 3
    const unsigned char mask_3{0b00001000}; // at pos 4
    const unsigned char mask_4{0b00010000}; // at pos 5
    const unsigned char mask_5{0b00100000}; // at pos 6
    const unsigned char mask_6{0b01000000}; // at pos 7
    const unsigned char mask_7{0b10000000}; // at pos 8

    unsigned data_1{0b00100100};
    unsigned data_2{0b00100110};
    unsigned data_3{0b00100110};
    unsigned data_4{0b00100110};

    /**
     * we do multiple operations using the bit mask
     *
     * 1 setting bit --> setting value to 1
     * 2 resetting bit --> setting value to 0
     * 3 checking the bit
     * 4 toggle the bit --> flipping bit value.
     */

    // setting bit value at pos 2
    std::cout << "Setting bit :" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "data :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_1) << std::endl;
    data_1 |= mask_1;
    std::cout << std::setw(COLUMN_WIDTH) << "mask :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(mask_1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "result :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_1) << std::endl;

    // resetting bit value at pos 2
    std::cout << "Resetting bit :" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "data :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_2) << std::endl;
    data_2 &= (~mask_1);
    std::cout << std::setw(COLUMN_WIDTH) << "mask :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(mask_1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "result :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_2) << std::endl;

    // checking bit at pos 5
    std::cout << "Checking bit at pos 5 :" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "data :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_3) << std::endl;
    data_3 &= mask_5;
    bool check_bit = data_3 >> 5; // right shift
    std::cout << std::setw(COLUMN_WIDTH) << "mask :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(mask_5) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "result :" << std::setw(COLUMN_WIDTH) << check_bit << std::endl;

    // toggling bit at pos 5
    std::cout << "Checking bit at pos 5 :" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "data :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_4) << std::endl;
    data_4 ^= mask_5;
    std::cout << std::setw(COLUMN_WIDTH) << "mask :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(mask_5) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "result :" << std::setw(COLUMN_WIDTH) << std::bitset<8>(data_4) << std::endl;

    std::cout << std::endl
              << "Packing Color information using mask----------------------------------------------------------------------------------------------------------> " << std::endl;

    /*
        every color is made up of rgba range from(0 to 255)
        r->red
        g->green
        b->blue
        a->alpha (transparency)
        these rgba has fix value for each we can use these value and some bit operations to find the amount value of rgba in any given color
    */
    const unsigned int red_mask{0xff000000};
    const unsigned int green_mask{0x00ff0000};
    const unsigned int blue_mask{0x0000ff00};
    const unsigned int alpha_mask{0x000000ff};

    // some random color
    unsigned int my_color{0xabccde00};

    // lets find that random colors value
    std::cout << std::hex << std::showbase;
    std::cout << "My color :" << my_color << std::endl;
    std::cout << "Amount of Red : " << ((my_color & red_mask) >> 24) << std::endl;
    std::cout << "Amount of green : " << ((my_color & green_mask) >> 16) << std::endl;
    std::cout << "Amount of blue : " << ((my_color & blue_mask) >> 8) << std::endl;
    std::cout << "Amount of alpha : " << ((my_color & alpha_mask) >> 0) << std::endl;

    /**
     * since unsigned int is size of 32 bit that means each rgba gets 8 bits
     * inorder to find the data we need to do AND operation then right shift operation
     * so to find,
     * red we need to shift -> 24 bits
     * green we need to shift -> 16 bits
     * blue we need to shift -> 8 bits
     * alpha we need to shift -> 0 bit
     *
     */

    return 0;
}
