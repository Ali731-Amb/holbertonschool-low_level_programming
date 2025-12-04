#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fonction qui libère une grille 2D créée auparavant par la fonction alloc_grid.
 *
 * @grid: Tableau à deux dimensions à libérer
 * @height: Hauteur du tableau (nombre de lignes)
 */

void free_grid(int **grid, int height)
{
    int i;

    /* Parcourt chaque ligne du tableau et libère la mémoire associée */
    for (i = 0; i < height; i++)
        free(grid[i]);
    /* Libère la mémoire du tableau de pointeurs */
    free(grid);
}
