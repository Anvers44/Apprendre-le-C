# Exercice 6 : Pointeurs

## Objectifs
- Comprendre ce qu'est un pointeur
- Utiliser les opérateurs `&` et `*`
- Manipuler des adresses mémoire

## Les bases des pointeurs

```c
int nombre = 42;
int *ptr = &nombre;  // ptr contient l'adresse de nombre

printf("Valeur : %d\n", nombre);      // 42
printf("Adresse : %p\n", &nombre);     // 0x7fff...
printf("Via pointeur : %d\n", *ptr);   // 42
printf("Adresse dans ptr : %p\n", ptr); // Même que &nombre
```

## Opérateurs essentiels

| Opérateur | Nom | Exemple |
|-----------|-----|---------|
| `&` | Adresse de | `&variable` |
| `*` | Déréférencement | `*pointeur` |

## Exercice 1 : Échange de valeurs

Créer une fonction `void echanger(int *a, int *b)` qui échange les valeurs de deux variables.

```c
int x = 5, y = 10;
echanger(&x, &y);
printf("x = %d, y = %d\n", x, y);  // x = 10, y = 5
```

## Exercice 2 : Modifier via pointeur

Créer une fonction `void doubler(int *n)` qui double la valeur pointée.

## Exercice 3 : Pointeurs et tableaux

Comprendre que `tableau[i]` est équivalent à `*(tableau + i)`.

Créer un programme qui :
1. Parcourt un tableau avec des pointeurs (sans utiliser `[]`)
2. Affiche chaque élément

## Exercice 4 : Somme via pointeur

Créer une fonction qui calcule la somme d'un tableau en utilisant uniquement des pointeurs.

```c
int somme(int *debut, int *fin);
```

## Exercice 5 : Pointeur de pointeur

Créer un programme qui utilise un pointeur vers un pointeur (`int **ptr`).

## Exemple de sortie (Échange)

```
Avant : x = 5, y = 10
Après : x = 10, y = 5
```

## Pour aller plus loin
- Passer un tableau à une fonction via pointeur
- Retourner un pointeur depuis une fonction
- Comprendre les pointeurs de fonctions