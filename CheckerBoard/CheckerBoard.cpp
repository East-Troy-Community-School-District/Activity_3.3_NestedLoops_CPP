/*
Checker Board
Pawelski
4/18/2023
C++
*/

#include <iostream>

int main()
{
    const int SIDE_LENGTH = 8;
    for (int i = 0; i < SIDE_LENGTH; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < SIDE_LENGTH/2; j++)
            {
                std::cout << "0 1 ";
            }
        }
        else
        {
            for (int j = 0; j < SIDE_LENGTH/2; j++)
            {
                std::cout << "1 0 ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
