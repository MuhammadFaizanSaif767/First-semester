#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int columns = 3;

    int array[rows][columns] = {
        {1, 2, 33},
        {4, 5, 6},
        {9, 2, 1}
    };

    int maxval;
    int counter = 0;

    // Calculate sum of first row
    maxval = 0;
    for (int c = 0; c < columns; c++)
    {
        maxval += array[0][c];
    }

    // Check remaining rows
    for (int r = 1; r < rows; r++)
    {
        int sum = 0;

        for (int c = 0; c < columns; c++)
        {
            sum += array[r][c];
        }

        if (sum > maxval)
        {
            maxval = sum;
            counter = r;
        }
    }

    cout << "The row index with max sum is: " << counter << endl;
    cout << "Maximum sum is: " << maxval << endl;

    return 0;
}
