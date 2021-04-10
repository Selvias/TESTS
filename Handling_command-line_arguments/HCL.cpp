#include <iostream>
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

    return 0;
}