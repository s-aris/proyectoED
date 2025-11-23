#include <stdio.h>

int main() {
    int respuestas[6];
    const char *preguntas[6] = {
        "Is random access by index needed frequently?",
        "Are insertions/deletions in the middle common?",
        "Are key-values looups the primary operation?",
        "Is ordering or priority required?",
        "Do you need FIFO or LIFO processing?",
        "Do you need to support range queries?"
    };

    printf("Answer using  1 (yes) or 0 (no)\n\n");

    for (int i = 0; i < 6; i++) {
    do {
        printf("%d. %s\n", i + 1, preguntas[i]);

        if (scanf("%d", &respuestas[i]) != 1) {
            printf("Error: Only numbers allowed.\n\n");
            scanf("%*s");
            respuestas[i] = -1;
        }

        if (respuestas[i] != 0 && respuestas[i] != 1) {
            if (respuestas[i] != -1)  
                printf("Error: Only 1 or 0 allowed. Try again.\n\n");
        }

    } while (respuestas[i] != 0 && respuestas[i] != 1);
}

    int random = respuestas[0];
    int mid    = respuestas[1];
    int lookup = respuestas[2];
    int order  = respuestas[3];
    int fifo   = respuestas[4];
    int range  = respuestas[5];

    printf("\nRecomendation based on your answers:\n\n");

    if (lookup == 1 || order == 1 || range == 1 || mid == 1) {
        printf("Recomendacion: TREE\n");
        printf("https://bit.ly/49CkbPa\n");
    }

    else if (fifo == 1) {
        printf("Recomendacion: QUEUE\n");
        printf("https://bit.ly/47Y0Bf0\n");
    }

    else if (random == 1 || mid == 1) {
        printf("Recomendacion: ARRAY\n");
        printf("https://bit.ly/4idt184\n");
    }

    else {
        printf("Recomendacion: TREE\n");
        printf("https://bit.ly/49CkbPa\n");
    }

    return 0;
}
