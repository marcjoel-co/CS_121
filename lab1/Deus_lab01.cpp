#include <iostream>
#include <string>
#include <cmath>
/**
 * @brief Converts binary and decimal back to back
 * @author Marc Joel B. Deus
 * @date August, 7 2025
 * @note original Dysfunctional code is available at:
 *       (the code post and after)
 */
// function prototypes 
int binaryToDeci(float binary);
int deciToBi(float decimal);

void consolueOutput();

int main()
{
   
    consolueOutput();
    int paraswitch;
    float number;
    int valuenow = 0;

    std::cin >> paraswitch;
    std::cin >> number;

    switch (paraswitch)
    {
        case 1:
            valuenow = binaryToDeci(number);
            break;
        case 2:
            valuenow = deciToBi(number);
            break;
        default:
        // please be kind wala no edge cases :(
            std::cout << " try again noob (1, 2)";
    }
   
    std::cout << "from:" << number << " to: " << valuenow;

    return 0;
}


/**
 * @brief binary to decimal
 */
int binaryToDeci(float binary)
{


    int num = (int)binary; // cast binary to int
    int decimal_value = 0; // will store finaslf value
    int power = 0;  // 2^0, 2^1 etc.

    // 
    while(num > 0)
    {
        int last_digit = num % 10; // effectively gets the last digit if 10 -> 0, if 11 -> 1
        if (last_digit == 1)       
        {
            decimal_value += pow(2, power); // if switch is active (1) get current power raised to 2   
        }
        num = num / 10; // divides the original binary to 10 effectively getting rid of a digit
        power++;  // increments powah
    }
    return decimal_value;
}

/**
 * @brief coverts decimal to binary
 */
int deciToBi(float decimal)
{
    int num = (int)decimal;
    std::string binary = "";
    
    if (num == 0) {
        return 0;
    }
    
    while (num > 0)
    {
        if (num % 2 == 1) {
            binary = "1" + binary;
        } else {
            binary = "0" + binary;
        }
        num /= 2;
    }

    return std::stoi(binary);  // returns binary into an int to match with the other function
}

/**
 * @brief awan lang pag pa clean main function
 */
void consolueOutput()
{
 std::cout << "what conversion are we feeling today";

 std::cout << "1. Convert Binary to Decimal" << "\n";

 std::cout << "2. Convert Decimal to Binary" << "\n";
}