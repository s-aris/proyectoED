#include <stdio.h>

int main() {
    int respuestas[6];
    int key, counter = 1;
    const char *preguntas[6] = {
        "Is random access by index needed frequently?",
        "Are insertions/deletions in the moddle common?",
        "Are key-values looups the primary operation?",
        "Is ordering or priority required?",
        "Do you need FIFO or LIFO processing?",
        "Do you need to support range queries?"
    };

    printf("Answer using  1 (yes) or 0 (no)\n\n");

    for (int i = 0; i < 6; i++) {
        do {
            printf("%d. %s\n", i + 1, preguntas[i]);
            scanf("%d", &respuestas[i]);

            if (respuestas[i] != 0 && respuestas[i] != 1) {
                printf("Error: Only 1 or 0 allowed. Try again.\n\n");
            }
        } while (respuestas[i] != 0 && respuestas[i] != 1);
    }
    

    key = respuestas[0]*32 + respuestas[1]*16 + respuestas[2]*8 + respuestas[3]*4 + respuestas[4]*2 + respuestas[5];
    
    printf("\nRecomendation based on your answer:\n");

    switch (key) {
        case 0:
            printf("\nRecomendacion: ARRAY\n");
            printf("https://bit.ly/4idt184");
            
            break;
        case 8:
            printf("\nRecomendacion: TREE\n");
            printf("https://bit.ly/49CkbPa");
    

            break;
        case 18:
            printf("\nRecomendacion: QUEUE\n");
            printf("https://bit.ly/47Y0Bf0");
            
            break;
        case 33:
            printf("\nRecomendacion: ARRAY\n");
            printf("https://bit.ly/4idt184");
            
            break;
        case 44:
            printf("\nRecomendacion: TREE\n");
            printf("https://bit.ly/49CkbPa");
            
            break;
        default:
            printf("\nRecomendacion: TREE\n");
            printf("https://bit.ly/49CkbPa");
            
    }
    
    
    return 0;
}
