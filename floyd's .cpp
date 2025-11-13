#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int currentNumber = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << currentNumber << " ";
            currentNumber++;
        }
        std::cout << std::endl;
    }

    return 0;
}
    