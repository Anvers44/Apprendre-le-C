# Exercice 8 : Structures

## Objectifs
- Créer et utiliser des structures
- Accéder aux membres avec `.` et `->`
- Créer des tableaux de structures

## Les bases

```c
// Définition de la structure
struct Personne {
    char nom[50];
    int age;
    float taille;
};

// Utilisation
struct Personne p1;
strcpy(p1.nom, "Bilel");
p1.age = 25;
p1.taille = 1.75;

// Avec typedef
typedef struct {
    char nom[50];
    int age;
} Etudiant;

Etudiant e1;
```

## Exercice 1 : Carnet d'adresses

Créer une structure `Contact` avec :
- `nom` (chaîne)
- `telephone` (chaîne)
- `email` (chaîne)

Créer un programme qui :
1. Ajoute des contacts
2. Affiche tous les contacts
3. Recherche un contact par nom

## Exercice 2 : Gestion d'étudiants

Créer une structure `Etudiant` avec :
- `nom`
- `matricule`
- `notes[5]` (5 notes)
- `moyenne`

Créer les fonctions :
- `void saisir(Etudiant *e)`
- `void calculerMoyenne(Etudiant *e)`
- `void afficher(Etudiant e)`
- `int meilleur(Etudiant tableau[], int taille)`

## Exercice 3 : Pointeur vers structure

```c
struct Point {
    int x;
    int y;
};

struct Point p = {10, 20};
struct Point *ptr = &p;

// Accès via pointeur
printf("x = %d\n", ptr->x);  // Équivalent à (*ptr).x
```

Créer une fonction `void deplacer(struct Point *p, int dx, int dy)`.

## Exercice 4 : Liste de courses

Créer une structure `Produit` avec :
- `nom`
- `quantite`
- `prix`

Créer un programme qui :
1. Ajoute des produits
2. Calcule le total
3. Affiche la liste

## Pour aller plus loin
- Structures imbriquées
- Passage de structures aux fonctions
- Retour de structures depuis des fonctions