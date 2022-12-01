#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int** a, const int rowCount, const int colCount, const int Low,
    const int High)
{
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < colCount; j++)
            a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a, const int rowCount, const int colCount)
{
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

int Sum(int** a, const int rowCount, const int colCount)
{
    int s = 0, s1 = 0;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {
            if (a[i][j] >= 0)
                s1 += a[i][j];

            else
            {
                s1 = 0;
                break;
            }
        }

        s += s1;

        s1 = 0;
    }

    return s;
}


int main()
{
    srand(time(NULL));

    const int High = 100;
    const int Low = -10;
    int rowCount;
    int colCount;
    cout << "Enter the matrix size: "; cin >> rowCount;
    colCount = rowCount;

    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];

    Create(a, rowCount, colCount, Low, High);
    Print(a, rowCount, colCount);
    cout << "Sum = " << Sum(a, rowCount, colCount);

    for (int i = 0; i < rowCount; i++)
        delete[] a[i];
    delete[]a;

    return 0;
}