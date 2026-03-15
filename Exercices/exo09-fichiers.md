# Exercice 9 : Fichiers

## Objectifs
- Ouvrir, lire et écrire des fichiers
- Utiliser `fopen`, `fclose`, `fprintf`, `fscanf`
- Gérer les erreurs de fichiers

## Les bases

```c
// Ouvrir un fichier
FILE *fichier = fopen("data.txt", "w");  // w = écriture

// Vérifier si le fichier s'est ouvert
if (fichier == NULL) {
    printf("Erreur d'ouverture\n");
    return 1;
}

// Écrire
fprintf(fichier, "Hello, World!\n");

// Fermer
fclose(fichier);
```

## Modes d'ouverture

| Mode | Description |
|------|-------------|
| `r` | Lecture (le fichier doit exister) |
| `w` | Écriture (crée ou écrase) |
| `a` | Ajout (crée si n'existe pas) |
| `r+` | Lecture et écriture |
| `w+` | Lecture et écriture (écrase) |

## Fonctions de lecture

```c
// Lire un caractère
char c = fgetc(fichier);

// Lire une ligne
char ligne[100];
fgets(ligne, 100, fichier);

// Lire formaté
int n;
fscanf(fichier, "%d", &n);
```

## Exercice 1 : Copier un fichier

Créer un programme qui copie le contenu d'un fichier vers un autre.

```c
// Usage : ./copier source.txt destination.txt
```

## Exercice 2 : Compter les lignes

Créer une fonction `int compterLignes(char *nomFichier)` qui compte le nombre de lignes d'un fichier.

## Exercice 3 : Journal de notes

Créer un programme qui :
1. Demande des notes à l'utilisateur
2. Les sauvegarde dans un fichier `notes.txt`
3. Peut relire et afficher les notes
4. Calcule la moyenne

## Exercice 4 : Carnet d'adresses avec fichiers

Étendre le carnet d'adresses de l'exercice 8 pour :
1. Sauvegarder les contacts dans un fichier
2. Charger les contacts depuis un fichier

## Exemple de sortie (Journal de notes)

```
1. Ajouter une note
2. Afficher les notes
3. Calculer la moyenne
4. Quitter
Choix : 1
Entrez une note : 15
Note ajoutée !

Notes sauvegardées dans notes.txt
```

## Pour aller plus loin
- Écrire et lire des fichiers binaires (`fwrite`, `fread`)
- Manipuler des fichiers CSV
- Créer un fichier de configuration