#include "lists.h"
// Inclusion du fichier d'en-tête contenant la définition de la structure et des fonctions nécessaires

/**
 * get_dnodeint_at_index - fonction qui retourne
 * le nième nœud d'une liste doublement chaînée dlistint_t.
 *
 * @head: pointeur vers la tête de la liste
 * @index: index du nœud à récupérer (commence à 0)
 * Return: NULL si le nœud n'existe pas, sinon le pointeur vers le nœud cherché.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0; // Compteur pour suivre la position actuelle dans la liste
	/* Pointeur temporaire pour parcourir la liste, initialisé sur la tête */
	dlistint_t *temp = head;

	// Parcours de la liste jusqu'à trouver l'index désiré ou atteindre la fin
	while (temp != NULL)
	{
		if (count == index) /* Si on atteint l'index recherché, retourner le nœud courant */
		{
			return (temp);
		}
		/* Passage au nœud suivant et incrément du compteur */
		temp = temp->next;
		count++;
	}
	// Si l'index spécifié est hors de la liste, retourner NULL
	return (NULL);
}
