#include <iostream>  
using namespace std;
int main() 
{
    double num1, num2, sum;  
    cout << "Enter the first number: ";
    cin >> num1;  
    cout << "Enter the second number: ";
    std::cin >> num2;  
    sum = num1 + num2;  
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    return 0;  
}
