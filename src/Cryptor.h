#pragma once


#include <string>
#include <vector>


namespace Functions
{

	const int z = 25;
	const char a = 'a';
	const char A = 'A';


	std::string Encryptor(std::string word, std::string key);
	std::string Decryptor(std::string word, std::string key);

}