# MLX Playground

## Description
MLX Playground est un projet destiné à expérimenter avec la **MiniLibX**, une bibliothèque graphique légère utilisée principalement dans les projets de l'école **42**. L'objectif est de tester diverses fonctionnalités graphiques, explorer la gestion des fenêtres, la manipulation des pixels, et bien plus encore.

## Fonctionnalités
- Initialisation et affichage de fenêtres avec MiniLibX
- Manipulation de pixels et création de formes simples
- Gestion des événements clavier et souris
- Expérimentations avec les fractales et autres visualisations

## Prérequis
Avant de compiler et exécuter le projet, assure-toi d’avoir les dépendances suivantes installées sur ton système :
- **MiniLibX** (automatiquement clonée si absente)
- **GCC** ou tout autre compilateur compatible avec les flags utilisés
- **Make**
- **X11** et **Xext** (sur Linux : `sudo apt install libx11-dev libxext-dev`)

## Installation
1. Clone le dépôt :
   ```sh
   git clone git@github.com:SkyDogzz/mlx-playground.git
   cd mlx_playground
   ```
2. Compile le projet :
   ```sh
   make
   ```
3. Exécute le programme :
   ```sh
   ./mlx_playground <mode>
   ```
   Remplace `<mode>` par un argument valide selon les fonctionnalités implémentées.

## Structure du Projet
```
mlx_playground/
│── src/
│   ├── main.c              # Point d'entrée du programme
│   ├── exit.c              # Gestion des erreurs et sortie propre
│   ├── math/               # Fonctions mathématiques utiles
│   ├── utils/              # Fonctions utilitaires
│   ├── ...                 # Ect
│── include/
│   ├── mlx_playground.h    # Déclarations des fonctions et structures
│── .minilibx/              # MiniLibX (clonée automatiquement si absente)
│── obj/                    # Fichiers objets générés par la compilation
│── Makefile                # Compilation et gestion des dépendances
│── README.md               # Documentation du projet
│── LICENSE                 # License du projet
```

## Compilation
Le **Makefile** gère plusieurs options de compilation :
- `make` : Compile le programme
- `make clean` : Supprime les fichiers objets
- `make fclean` : Supprime les fichiers objets et l’exécutable
- `make re` : Nettoie et recompile

Modes de compilation :
- `make DEBUG=1` : Active les flags de débogage (`-g3`)
- `make FSAN=1` : Active l’Address Sanitizer (`-fsanitize=address`)

## Développement et Tests
Pour ajouter de nouvelles expérimentations, il suffit d’ajouter un fichier source dans `src/`, l’inclure dans `Makefile`, et l’appeler dans `main.c`.

## Licence
Ce projet est sous licence MIT. Tu es libre de l'utiliser, le modifier et le partager.
