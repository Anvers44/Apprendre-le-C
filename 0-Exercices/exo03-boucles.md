# Exercice 3 : Boucles

## Objectifs
- Utiliser les boucles `for`, `while`, `do-while`
- Comprendre `break` et `continue`
- Imbriquer des boucles

## Les 3 types de boucles

### Boucle `for`
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

### Boucle `while`
```c
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

### Boucle `do-while`
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
```

## Exercice 1 : Compter jusqu'à N

Créer un programme qui :
1. Demande un nombre N à l'utilisateur
2. Affiche tous les nombres de 1 à N

## Exercice 2 : Somme des nombres

Créer un programme qui :
1. Demande des nombres à l'utilisateur
2. Continue tant que l'utilisateur n'entre pas 0
3. Affiche la somme totale et la moyenne

## Exercice 3 : Tables de multiplication

Créer un programme qui :
1. Demande un nombre N
2. Affiche la table de multiplication de N (de 1 à 10)

## Exemple de sortie (Table de multiplication)

```
Entrez un nombre : 5
Table de multiplication de 5 :
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

## Exercice 4 : Triangle d'étoiles

Créer un programme qui affiche un triangle :

```
*
**
***
****
*****
```

## Pour aller plus loin
- Faire un triangle inversé
- Faire une pyramide centrée
- Faire un sapin de Noël