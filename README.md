# Apprentissage du Langage C

Bienvenue Bilel et Lounes ! Ce repo est votre espace d'apprentissage commun.

---

## Roadmap d'apprentissage

| Semaine | Thème | Notions |
|---------|-------|---------|
| 1 | Les bases | Variables, types, printf, scanf |
| 2 | Conditions | if, else, switch, opérateurs logiques |
| 3 | Boucles | while, for, do-while, break, continue |
| 4 | Fonctions | Déclaration, paramètres, return, portée |
| 5 | Tableaux | Déclaration, initialisation, parcours |
| 6 | Pointeurs | Adresses, déréférencement, arithmétique |
| 7 | Pointeurs avancés | Pointeurs et tableaux, pointeurs de fonctions |
| 8 | Chaînes de caractères | char[], strlen, strcpy, strcmp |
| 9 | Structures | struct, typedef, tableaux de structures |
| 10 | Fichiers | fopen, fclose, fprintf, fscanf |
| 11 | Allocation dynamique | malloc, free, realloc |
| 12 | Projet final | Mini-projet consolideant tout |

---

## Structure du repo

```
apprentissage-c/
├── README.md           # Ce fichier
├── Bilel/              # Exercices de Bilel
│   ├── exo01.c
│   ├── exo02.c
│   └── ...
├── Lounes/              # Exercices de ton frère
│   ├── exo01.c
│   ├── exo02.c
│   └── ...
└── Exercices/               # Énoncés des exercices
    ├── exo01-variables.md
    ├── exo02-conditions.md
    └── ...
```

---

## Comment travailler

### 1. Récupérer le repo
```bash
git clone https://github.com/TON-USERNAME/apprentissage-c.git
cd apprentissage-c
```

### 2. Travailler sur un exercice
```bash
# Créer un fichier pour l'exercice du jour
touch bilel/exo01.c

# Coder dans votre éditeur préféré
```

### 3. Sauvegarder son travail
```bash
git add bilel/exo01.c
git commit -m "Exo 01: Variables - Bilel"
git push
```

### 4. Comparer avec l'autre
```bash
# Voir les différences
git diff bilel/exo01.c frere/exo01.c

# Ou sur GitHub directement dans l'onglet "Compare"
```

---

## Compiler un fichier C

```bash
gcc bilel/exo01.c -o bilel/exo01
./bilel/exo01
```

---

## Ressources

- [Learn-C.org](https://www.learn-c.org/) - Tutoriels interactifs
- [C Programming de K&R](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Le livre de référence
- [Exercism.io](https://exercism.io/tracks/c) - Exercices avec mentorat

---

## Planning hebdomadaire

Chaque semaine :
1. Lire l'énoncé dans `/exos/`
2. Coder individuellement dans son dossier
3. Commit & push quand terminé
4. Comparer les solutions ensemble
5. Discuter des différences et approches

**Objectif** : Comprendre les différentes façons de résoudre un même problème !