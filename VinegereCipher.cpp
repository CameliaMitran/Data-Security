#include "pch.h"
#include<stdio.h>
#include<string.h>

int main() {
	char plain_text[] = "PEOPLEWITHBEAUTIFULHEARTS";
	char key[] = "LOVE";
	const int text_length = strlen(plain_text);
	const int keyLen = strlen(key);
	int i, j;
	char new_key[30], encrypted_text[30], decrypted_text[30];

	//generating new key
	for (i = 0, j = 0; i < text_length; ++i, ++j) {
		if (j == keyLen)
			j = 0;

		new_key[i] = key[j];
	}

	new_key[i] = '\0';

	//encryption
	for (i = 0; i < text_length; ++i)
		encrypted_text[i] = ((plain_text[i] + new_key[i]) % 26) + 'A';

	encrypted_text[i] = '\0';

	//decryption
	for (i = 0; i < text_length; ++i)
		decrypted_text[i] = (((encrypted_text[i] - new_key[i]) + 26) % 26) + 'A';

	decrypted_text[i] = '\0';

	printf("Plain Text: %s", plain_text);
	printf("\nKey: %s", key);
	printf("\nNew Generated Key: %s", new_key);
	printf("\nEncrypted Text: %s", encrypted_text);
	printf("\nDecrypted Text: %s", decrypted_text);

	return 0;
}