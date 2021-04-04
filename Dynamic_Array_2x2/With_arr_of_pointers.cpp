#include <iostream>

using namespace std;

int main () {

    int **m;
    int i, j;

    //Выделение памяти под указателли на строки
    m = (int**)malloc(10*sizeof(int*)); 
    //Выделение памяти под столбцы
    for (i = 0; i < 10; i++) {
        m[i] = (int*)malloc(10*sizeof(int));
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            m[i][j] = 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout << m[i][j] << "  ";
            if (j == 9)
                cout << "\n";
        }
    }

    return 0;
}