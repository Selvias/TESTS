#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int i = 0;
    // char word[10];
    char *words = NULL;
    words = (char*)malloc(10*sizeof(char*));

    ifstream input;
    input.open("symbols.txt");

    ofstream output;
    output.open("written.txt");

    while(!input.eof()) {
        if (input.eof())
            break;
        input.getline(&words[i], 20,'\n');
        output << &words[i] << "\n";
        i++;
    }

    input.close();
    output.close();

    return 0;
}