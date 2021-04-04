#include <iostream>

using namespace std;

int main () {

    int *m;

    m = (int*)malloc(10*10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            *(m + i*10 + j) = 0;            //Обращение к i,j элементу массива через указатель m на двумерный массив (линейное расположение двумерного массива в памяти компьютера)
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << *(m + i*10 + j) << " ";
            if (j == 9)
                cout << "\n";
        }
    }

    return 0;
}