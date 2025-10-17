# Compilateur GCC

## Description

Le compilateur GCC(GNU Compiler Collection) est un compilateur qui transforme le code source en code machine executable par l'ordinateur.

La compilation passe par plusieurs étapes :

- Prétraitement : inclusion de fichiers (#include), macros (#define)

- Compilation : transformation du code source en assembleur

- Assemblage : génération de fichiers objets (.o)

- Édition de liens (linking) : regroupement des objets pour produire un exécutable

## Exemple de commande

Ci-dessous un exemple de code permettant d'afficher un message "Hello World" dans le terminal

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%s\n", "Hello World !!");
    return 0;
}

```

La commande ci-dessous permet de compiler un fichier main.c et generer un fichier main.o et ensuite l'éxécution du code 
```
gcc -Wall -c main.c -o main.o && ./main.o
```



### Details

- gcc : On lance la commande pour la compilation

- Wall : Flag qui active la plupart des avertissements

- o : permet de generer un fichier d'assemblage à un nom souhaité




