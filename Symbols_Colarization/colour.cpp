#include <iostream>

using namespace std;

int main () {

	int i = 0;
        char str[10] = "Hello\n";
	while (str[i] != '\n') {

        	cout << "\x1b[31m" << str[i] << "\x1b[0m" << "\n";
		i++;
	}
return 0;
}
