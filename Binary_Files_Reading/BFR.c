#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main (int argc, char **argv) {

    FILE *in, *out;
    in = fopen(argv[2], "r");
    out = fopen(argv[3], "wb");

    uint8_t digit;

    char *action = argv[1];

    if (strcmp(action, "code") == 0) {
        while(!feof(in)) {
            fscanf(in, "%hhd", &digit);
            fwrite(&digit, 1, 1, out);
            if (feof(in)) {
                break;
            }
        }
        fclose(in);
        fclose(out);
    } else if (strcmp(action, "decode") == 0) {
        while(!feof(in)) {
            fread(&digit, 1, sizeof(uint8_t), in);
            printf("DIGIT : %d\n", digit);
            fprintf(out, "%d\n", digit);
            if (feof(in)) {
                break;
            }
        }
        fclose(in);
        fclose(out);
    }

    return 0;
}