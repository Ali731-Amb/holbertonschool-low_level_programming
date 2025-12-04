#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - crée une grille à deux dimensions remplie de zéros
 * @width: nombre de colonnes
 * @height: nombre de lignes
 *
 * Return: pointeur vers le tableau 2D alloué,
 *         ou NULL si l’allocation échoue ou si width/height <= 0
 */
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    // Vérification des dimensions, doivent être positives
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocation d'un tableau de pointeurs pour chaque ligne
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    // Pour chaque ligne, on alloue un tableau d'entiers
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // En cas d'échec, on libère toutes les lignes déjà allouées
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        // Initialisation de chaque case à 0
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    // Retour du pointeur vers la grille allouée
    return (grid);
}
