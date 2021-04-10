#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

    cout << "Argc is : " << argc << "\n";

    for (int i = 0; i < argc; i++)
        cout << i << ". " << argv[i] << "\n";

    ofstream output;
    output.open(argv[1]);

    for (int j = 0; j < 10; j++)
        output << j << "\n";

    output.close();

    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    int c = a + b;

    cout << "SUMMA (ATOI_FUNC_TEST) : " << c << "\n";

    return 0;
}