# Exercice 4 : Fonctions

## Objectifs
- Déclarer et définir des fonctions
- Passer des paramètres
- Retourner des valeurs
- Comprendre la portée des variables

## Structure d'une fonction

```c
// Déclaration (prototype)
int addition(int a, int b);

// Définition
int addition(int a, int b) {
    return a + b;
}

// Utilisation
int resultat = addition(5, 3);
```

## Exercice 1 : Calculatrice avec fonctions

Créer un programme avec les fonctions suivantes :
- `int addition(int a, int b)`
- `int soustraction(int a, int b)`
- `int multiplication(int a, int b)`
- `float division(int a, int b)` (attention à la division par 0)

## Exercice 2 : Vérifier si un nombre est premier

Créer une fonction `int estPremier(int n)` qui :
- Retourne `1` si le nombre est premier
- Retourne `0` sinon

## Exercice 3 : Factorielle

Créer une fonction `int factorielle(int n)` qui :
- Calcule n! (factorielle de n)
- Exemple : 5! = 5 × 4 × 3 × 2 × 1 = 120

## Exercice 4 : Fibonacci

Créer une fonction `int fibonacci(int n)` qui :
- Retourne le n-ième nombre de Fibonacci
- Suite : 0, 1, 1, 2, 3, 5, 8, 13, 21...

## Exemple de sortie (Factorielle)

```
Entrez un nombre : 5
5! = 120
```

## Pour aller plus loin
- Faire une version récursive de factorielle
- Faire une version récursive de Fibonacci
- Comparer les performances des versions itérative et récursive