# Exercice 2 : Conditions

## Objectifs
- Utiliser les instructions `if`, `else if`, `else`
- Comprendre les opérateurs de comparaison
- Utiliser les opérateurs logiques `&&`, `||`, `!`

## Opérateurs de comparaison

| Opérateur | Signification |
|-----------|---------------|
| `==` | Égal à |
| `!=` | Différent de |
| `<` | Inférieur à |
| `>` | Supérieur à |
| `<=` | Inférieur ou égal |
| `>=` | Supérieur ou égal |

## Exercice 1 : Vérifier l'âge

Créer un programme qui :
1. Demande l'âge de l'utilisateur avec `scanf`
2. Affiche si la personne est :
   - "Enfant" (moins de 12 ans)
   - "Adolescent" (12-17 ans)
   - "Adulte" (18-64 ans)
   - "Senior" (65 ans et plus)

## Exercice 2 : Calculatrice simple

Créer un programme qui :
1. Demande deux nombres et un opérateur (+, -, *, /)
2. Affiche le résultat
3. Gère le cas de la division par zéro

## Exemple de sortie (Calculatrice)

```
Entrez le premier nombre : 10
Entrez l'opérateur (+, -, *, /) : *
Entrez le deuxième nombre : 5
Résultat : 10 * 5 = 50
```

## Pour aller plus loin
- Ajouter la vérification que l'opérateur est valide
- Ajouter l'opérateur modulo `%`

---

## Template de départ

```c
#include <stdio.h>

int main() {
    // Exercice 1: Vérifier l'âge

    int age;
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    // Complétez avec les conditions...

    return 0;
}
```