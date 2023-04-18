/*
Grid
Pawelski
4/18/2023
C++
*/

#include <iostream>

int main()
{
    int rows, columns;
    std::cout << "How many rows do you want the grid to have? >> ";
    std::cin >> rows;
    std::cout << "How many columns do you want the grid to have? >> ";
    std::cin >> columns;
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < columns - 1; j++)
        {
            std::cout << "_|";
        }
        std::cout << "_\n";
    }
    for (int i = 0; i < columns - 1; i++)
    {
        std::cout << " |";
    }
    return 0;
}
