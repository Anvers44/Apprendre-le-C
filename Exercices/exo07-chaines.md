# Exercice 7 : Chaînes de caractères

## Objectifs
- Manipuler les chaînes en C
- Utiliser les fonctions de `<string.h>`
- Comprendre le caractère de fin `\0`

## Les bases

```c
// Déclaration
char nom[20] = "Bilel";
char prenom[] = "Bilel";  // Taille automatique = 6 (avec \0)

// Lecture
char buffer[100];
scanf("%s", buffer);        // Un seul mot
fgets(buffer, 100, stdin);  // Une ligne entière

// Affichage
printf("%s\n", nom);
```

## Fonctions de `<string.h>`

| Fonction | Description |
|----------|-------------|
| `strlen(s)` | Longueur de la chaîne |
| `strcpy(dest, src)` | Copie de chaîne |
| `strcat(dest, src)` | Concaténation |
| `strcmp(s1, s2)` | Comparaison (0 si égaux) |

## Exercice 1 : Longueur de chaîne

Créer une fonction `int monStrlen(char *chaine)` qui calcule la longueur sans utiliser `strlen`.

## Exercice 2 : Compter les voyelles

Créer une fonction `int compterVoyelles(char *chaine)` qui compte le nombre de voyelles dans une chaîne.

## Exercice 3 : Inverser une chaîne

Créer une fonction `void inverser(char *chaine)` qui inverse une chaîne sur place.

```
"hello" → "olleh"
```

## Exercice 4 : Palindrome

Créer une fonction `int estPalindrome(char *chaine)` qui vérifie si une chaîne est un palindrome.

```
"kayak" → 1 (oui)
"hello" → 0 (non)
```

## Exercice 5 : Recherche de caractère

Créer une fonction `int chercherCaractere(char *chaine, char c)` qui retourne l'indice du premier caractère trouvé, ou -1.

## Pour aller plus loin
- Convertir en majuscules/minuscules
- Supprimer les espaces
- Compter les mots d'une phrase