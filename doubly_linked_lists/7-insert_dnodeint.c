#include "lists.h"
// Inclusion du fichier d'en-tête pour les structures de listes

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	// Déclaration du nouveau nœud à insérer
	dlistint_t *new_node;
	// Pointeur temporaire pour parcourir la liste
	dlistint_t *temp = *h;
	// Compteur d'index
	unsigned int i = 0;

	// Vérifie si la liste existe
	if (h == NULL)
		return (NULL);

	// Si l'index est zéro, on ajoute en tête
	if (idx == 0)
		return (add_dnodeint(h, n));

	// Parcourt la liste jusqu'à la position précédant l'insertion
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	// Si la position d'insertion est invalide (trop loin)
	if (temp == NULL)
		return (NULL);

	// Si on veut insérer en fin de liste
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	// Alloue un nouveau nœud
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	// Initialise le contenu du nouveau nœud
	new_node->n = n;

	// Fait pointer le nouveau nœud vers l'élément suivant et précédent
	new_node->next = temp->next;
	new_node->prev = temp;
	// Relie le nœud suivant au nouveau nœud
	temp->next->prev = new_node;
	// Relie le nœud précédent au nouveau nœud
	temp->next = new_node;

	// Retourne l'adresse du nouveau nœud
	return (new_node);
}
