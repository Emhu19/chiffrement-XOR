#include <stdio.h>
#include <string.h>

void chiffrerXOR(char *texte, char cle) {
    for (int i = 0; texte[i] != '\0'; i++) {
        texte[i] = texte[i] ^ cle;
    }
}

int main() {
    char texte[] = "Hello World";
    char cle = 'K';
    printf("Texte original : %s\n", texte);
    chiffrerXOR(texte, cle);
    printf("Texte chiffré : %s\n", texte);
    chiffrerXOR(texte, cle);  
    printf("Texte déchiffré : %s\n", texte);
    return 0;
}
