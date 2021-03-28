#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {

    unsigned int counter = 0;
    char **strings = (char **)malloc(30 * sizeof(char*));

    ifstream in;
    in.open("input.txt");

    ofstream out;
    out.open("output.txt");

    while (in) {

        if (in.eof())
            break;

        strings[counter] = (char *)malloc(50*sizeof(char));

        if (strings != NULL)
            in.getline(strings[counter], 50);

        out << strings[counter] << "\n";

        counter++;
    }

    in.close();
    out.close();

    ofstream output;
    output.open("sorted_out.txt");

    for (unsigned int j = 0; j < (counter - 1); j++) {
        for (unsigned int k = j + 1; k < (counter); k++) {
            if (strcmp(strings[j], strings[k]) > 0)
            {
                cout << strings[j] << "\n";
                char *temp = (char *)malloc(50*sizeof(char));
                temp = strings[j];
                strings[j] = strings[k];
                strings[k] = temp;
            }
        }
    }

    for (unsigned int t = 0; t < counter; t ++)
        output << strings[t] << "\n";

    output.close();

    return 0;
}