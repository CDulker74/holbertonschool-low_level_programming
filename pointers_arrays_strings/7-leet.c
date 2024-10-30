/**
 * leet - Encodes a string into 1337
 * @s: The string to be encoded
 *
 * Description: This function replaces certain letters with numbers:
 * 'a' and 'A' are replaced by '4'
 * 'e' and 'E' are replaced by '3'
 * 'o' and 'O' are replaced by '0'
 * 't' and 'T' are replaced by '7'
 * 'l' and 'L' are replaced by '1'
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *s)
{
    // Le reste de votre code ici
}

char *leet(char *s)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (s[i] == leet_letters[j])
			{
				s[i] = leet_numbers[j];
				break;
			}
		}
	}

	return (s);
}
