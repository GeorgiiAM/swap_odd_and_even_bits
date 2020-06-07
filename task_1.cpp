#include <iostream>

using namespace std;

unsigned int swap_odd_and_even_bits(unsigned int Input_value)
{
    unsigned int even_bits = Input_value & 2863311530; // 10101010101010101010101010101010
    unsigned int odd_bits = Input_value & 1431655765; //  1010101010101010101010101010101

    even_bits >>= 1;
    odd_bits <<= 1;

    return (even_bits | odd_bits);
}


int main()
{
    unsigned int value;

    cout << "Input an unsigned integer value: ";
    cin >> value; 
    cout << "Result of bits swap: " << swap_odd_and_even_bits(value);

    return 0;
}