#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp = fopen("replica.c", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char *source_code = "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\nint main() {\n    FILE *fp;\n    fp = fopen(\"replica.c\", \"w\");\n\n    if (fp == NULL) {\n        printf(\"Error opening file.\\n\");\n        return 1;\n    }\n\n    char *source_code = \"%s\";\n    fprintf(fp, source_code, source_code);\n\n    fclose(fp);\n    return 0;\n}";

    fprintf(fp, source_code, source_code);

    fclose(fp);

    printf("Replica created successfully.\n");

    return 0;
}