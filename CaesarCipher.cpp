#include<stdio.h>

int main()
{
	char text[100], ch;
	int i, key;

	printf("Enter a text to encrypt: ");
	scanf("%s", &text);
	printf("Enter key: ");
	scanf("%d", &key);

	for (i = 0; text[i] != '\0'; ++i) {
		ch = text[i];

		if (ch >= 'a' && ch <= 'z') {
			ch = ch + key;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}

			text[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;

			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}

			text[i] = ch;
		}
	}

	printf("Encrypted message: %s", text);

	return 0;
}