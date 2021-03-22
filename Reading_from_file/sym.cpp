#include <iostream>
#include <fstream>

using namespace std;

int main() {

    unsigned int counter = 0;

    char **words = (char**)malloc(20*sizeof(char*));

    ifstream in;
    in.open("symbols.txt");

    ofstream out;
    out.open("written.txt");

    while(in) {
        cout << counter << "\n";
        words[counter] = (char *) malloc(20 * sizeof(char));
        if (in.eof())
            break;
        in.getline(words[counter], 15);
        out << words[counter] << "\n";

        counter ++;
    }

    in.close();
    out.close();

    cout << "REZ : " << words[0] << "\n";

    free(words);

}