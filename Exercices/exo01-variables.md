# Exercice 1 : Variables et Types

## Objectifs
- Comprendre les types de base en C
- Déclarer et initialiser des variables
- Utiliser `printf` pour afficher des valeurs

## Types à connaître

| Type | Description | Exemple |
|------|-------------|---------|
| `int` | Entier | `int age = 25;` |
| `float` | Décimal (simple précision) | `float prix = 19.99;` |
| `double` | Décimal (double précision) | `double pi = 3.14159;` |
| `char` | Caractère | `char lettre = 'A';` |

## Exercice

Créer un programme qui :
1. Déclare une variable `age` de type `int` avec votre âge
2. Déclare une variable `taille` de type `float` avec votre taille en mètres
3. Déclare une variable `initiale` de type `char` avec la première lettre de votre prénom
4. Affiche ces 3 variables avec `printf`

## Exemple de sortie attendue

```
Âge : 25 ans
Taille : 1.75 m
Initiale : B
```

## Pour aller plus loin
- Calculer et afficher l'année de naissance approximative
- Calculer et afficher la taille en centimètres

---

## Template de départ

```c
#include <stdio.h>

int main() {
    // Déclarez vos variables ici

    // Affichez les valeurs avec printf

    return 0;
}
```