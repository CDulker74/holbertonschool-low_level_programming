/**
 * int_index - recherche un entier dans un tableau
 * @array: tableau dans lequel chercher
 * @size: taille du tableau
 * @cmp: pointeur vers la fonction de comparaison
 *
 * Return: index du premier élément pour lequel la fonction cmp
 * ne renvoie pas 0, ou -1 si aucune correspondance n'est trouvée
 * ou si la taille est négative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}