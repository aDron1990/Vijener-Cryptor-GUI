#include "Cryptor.h"


std::string Functions::Encryptor(std::string word, std::string key)
{

	std::string EncryptedWord;

	for (int i = 0, ii = 0; i < word.size(); i++)
	{

		if ((word[i] >= A && word[i] <= A + z) || (word[i] >= a && word[i] <= a + z))
		{

			if (word[i] >= A && word[i] <= A + z)
			{
				word[i] += a - A;
			}


			char ch = (key[ii % key.size()] - a) + (word[i] - a);


			if (ch > 25)
			{
				ch -= 26;
			}

			ch += a;
			EncryptedWord.push_back(ch);

		}

		else
		{
			EncryptedWord.push_back(word[i]);
			continue;
		}

		ii++;
	}

	return EncryptedWord;

}


std::string Functions::Decryptor(std::string word, std::string key)
{

	std::string DecryptedWord;

	for (int i = 0, ii = 0; i < word.size(); i++)
	{

		if ((word[i] >= A && word[i] <= A + z) || (word[i] >= a && word[i] <= a + z))
		{

			if (word[i] >= A && word[i] <= A + z)
			{
				word[i] -= a - A;
			}


			char ch = (word[i] - a) - (key[ii % key.size()] - a);


			if (ch < 0)
			{
				ch += z + 1;
			}

			ch += a;
			DecryptedWord.push_back(ch);

		}

		else
		{
			DecryptedWord.push_back(word[i]);
			continue;
		}

		ii++;
	}

	return DecryptedWord;

}