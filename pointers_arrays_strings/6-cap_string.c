#include "main.h"

/**
 * is_separator - vérifie si un caractère est un séparateur de mots
 * @c: caractère à vérifier
 * Return: 1 si c'est un séparateur, 0 sinon
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - met en majuscule la première lettre de chaque mot
 * @str: chaîne à modifier
 * Return: pointeur vers la chaîne modifiée
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		capitalize_next = is_separator(str[i]);
		i++;
	}

	return (str);
} 
