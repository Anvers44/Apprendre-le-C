# Exercice 5 : Tableaux

## Objectifs
- Déclarer et initialiser des tableaux
- Parcourir un tableau avec une boucle
- Manipuler des tableaux (recherche, tri)

## Déclaration et initialisation

```c
// Déclaration
int nombres[5];

// Déclaration avec initialisation
int nombres[5] = {1, 2, 3, 4, 5};

// Taille automatique
int nombres[] = {1, 2, 3, 4, 5};  // Taille = 5
```

## Exercice 1 : Somme et moyenne

Créer un programme qui :
1. Demande la taille du tableau (max 100)
2. Remplit le tableau avec des valeurs entrées par l'utilisateur
3. Calcule et affiche :
   - La somme de tous les éléments
   - La moyenne
   - Le minimum et le maximum

## Exercice 2 : Recherche d'un élément

Créer une fonction `int rechercher(int tableau[], int taille, int valeur)` qui :
- Retourne l'indice de `valeur` dans le tableau
- Retourne `-1` si non trouvé

## Exercice 3 : Tri à bulles

Créer une fonction qui trie un tableau par ordre croissant :

```c
void triBulles(int tableau[], int taille);
```

## Exercice 4 : Inverser un tableau

Créer une fonction qui inverse les éléments d'un tableau :

```c
void inverser(int tableau[], int taille);
```

## Exemple de sortie (Somme et moyenne)

```
Entrez la taille du tableau : 5
Entrez 5 nombres :
1. 10
2. 20
3. 30
4. 40
5. 50

Somme : 150
Moyenne : 30.00
Minimum : 10
Maximum : 50
```

## Pour aller plus loin
- Implémenter le tri par sélection
- Implémenter le tri par insertion
- Créer un tableau de caractères (chaîne)