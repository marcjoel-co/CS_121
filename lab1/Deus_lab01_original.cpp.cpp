#include <iostream>
#include <string>
#include <cmath>
/**
 * @brief dysfunction but this is the original code from the lab activity ;-;
 * @bug - alot
 *         1st missing implementation of binary to decimal
 *         2nd decitobi doesnt work, floor doesnt actually do what its suppose to do (to check for floating point)
 */
int binarytoDeci(float binary);
int decitobi(float decimal);

int main()
{
    std::cout << "what conversion are we feeling today";
    int value, valuenow;
    std::cin >> value;
    //gets input in decimal
    float number;
    std::cin >> number;
    
    switch (value)
    {
        case 1:
            // implement binary to decimal
            valuenow = binarytoDeci(number);
            break;
        case 2:
            // implements decimal to binary
            valuenow = decitobi(number);
            break;
        default:
            std::cout << " try again noob (1, 2)";
    }
    std::cout << "from:" << number;
}

int binarytoDeci(float binary)
{
    // something about dividing by 10 and power of 2
    return 0;
}

int decitobi(float decimal)
{
    int counter = 0;
    char arrayy[50];
    char newarray[50];
    
    while (decimal >= 1)
    {
        decimal /= 2;
        if (floor(decimal) == decimal)
        {
            arrayy[counter] = '0';
        }
        else
        {
            decimal = (int)decimal;
            arrayy[counter] = '1';
        }
        counter++;
    }
    std::cout << arrayy;
    
    // divide decimal number by 2 until the dividend is less than 1
    // if quotient == whole number, append 0 to the left od decimal poin
    // otherwise if it is not a whole number append 1 to the left of the
}