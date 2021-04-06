#include <iostream>
#include <fstream>

using namespace std;

int main () {

    system("nano text.txt");                        //Команда для строки, в которой происходит работа. В данном случае открывает файл text.txt в редкторе nano.

    ifstream in;
    in.open("text.txt");

    char **words = NULL;
    words = (char**)malloc(10*sizeof(char*));

    for (int i = 0; i < 10; i++) {
        words[i] = (char*)malloc(10*sizeof(char));

        in.getline(words[i], 10);
    }

    for (int i = 0; i < 10; i++) {

        cout << words[i] << "\n";
    }

    return 0;
}