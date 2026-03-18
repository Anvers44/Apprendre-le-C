# Exercice 10 : Allocation dynamique

## Objectifs
- Utiliser `malloc`, `calloc`, `realloc`, `free`
- Comprendre la gestion de la mémoire
- Éviter les fuites de mémoire

## Les bases

```c
#include <stdlib.h>

// Allocation simple
int *ptr = (int*)malloc(sizeof(int));
*ptr = 42;
free(ptr);

// Allocation d'un tableau
int *tableau = (int*)malloc(10 * sizeof(int));
tableau[0] = 1;
free(tableau);
```

## Fonctions d'allocation

| Fonction | Usage |
|----------|-------|
| `malloc(n)` | Alloue n octets |
| `calloc(count, size)` | Alloue et initialise à 0 |
| `realloc(ptr, n)` | Redimensionne |
| `free(ptr)` | Libère la mémoire |

## Exercice 1 : Tableau dynamique

Créer un programme qui :
1. Demande la taille du tableau à l'utilisateur
2. Alloue la mémoire dynamiquement
3. Remplit le tableau
4. Affiche le tableau
5. Libère la mémoire

## Exercice 2 : Redimensionner un tableau

Créer une fonction qui :
1. Alloue un tableau de taille initiale
2. Permet d'ajouter des éléments
3. Redimensionne avec `realloc` si nécessaire

```c
int *tableau = NULL;
int taille = 0;
int capacite = 5;

tableau = (int*)malloc(capacite * sizeof(int));
// Ajouter un élément...
// Si taille == capacite, doubler la capacité
tableau = (int*)realloc(tableau, nouvelleCapacite * sizeof(int));
```

## Exercice 3 : Structure dynamique

Créer un programme qui :
1. Alloue dynamiquement une structure `Etudiant`
2. Remplit les champs
3. Affiche les informations
4. Libère la mémoire

## Exercice 4 : Liste de contacts dynamique

Reprendre le carnet d'adresses mais avec :
- Nombre de contacts dynamique
- Possibilité d'ajouter/supprimer des contacts
- Redimensionnement automatique

## Exercice 5 : Vérifier les fuites de mémoire

Compiler avec Valgrind (Linux) ou utiliser un outil similaire :

```bash
gcc -g programme.c -o programme
valgrind --leak-check=full ./programme
```

## Points d'attention

```c
// Toujours vérifier le retour de malloc
int *ptr = (int*)malloc(sizeof(int));
if (ptr == NULL) {
    printf("Erreur d'allocation\n");
    return 1;
}

// Toujours libérer la mémoire
free(ptr);
ptr = NULL;  // Bonne pratique
```

## Pour aller plus loin
- Implémenter une liste chaînée
- Créer une pile (stack) dynamique
- Créer une file (queue) dynamique