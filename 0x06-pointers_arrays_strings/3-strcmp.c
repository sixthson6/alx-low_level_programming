/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: negative integer if s1 is less than s2, zero if s1 is equal to s2, positive integer if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
if (s1[i] == '\0' && s2[i] == '\0') {
return (0);
}

return (s1[i] - s2[i]);
}
