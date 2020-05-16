#include <iostream>
#include "user_input.hpp"
#include "arithmetic.hpp"

using std::cin;
using std::cout;

void get_from_user_and_multiply()
{
    int x;
    int y;

    cout << "Enter 2 numbers!\n";

    cin >> x;
    cin >> y;

    cout << "Result : " << multiply(x, y);
}