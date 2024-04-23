#pragma once
#include "clsDate.h"
#include <iostream>
using namespace std;

class clsUtil
{
public: 

	enum enCharType { CapitalLetters = 1, SmallLetters, Digits, MixChar, SpecialCharacters };

	static void sRand() 
	{
		srand((unsigned)time(NULL));
	}


	static int randomNumber(int from, int to)
	{
		int randomNum = rand() % (to - from + 1) + from;

		return randomNum;
	}

	static char getRandomCharacter(enCharType charType) 
	{
		if (charType == MixChar)
			charType = (enCharType) randomNumber(1, 3);

		switch (charType) 
		{

		case CapitalLetters:
			return char(randomNumber(65, 90));

		case SmallLetters:
			return char(randomNumber(97, 122));

		case Digits:
			return char(randomNumber(48, 57));

		case SpecialCharacters:
			return char(randomNumber(32, 47));

		default :
			return char(randomNumber(65, 90));

		}
	}

	static string generateWord(short length, enCharType charType)
	{
		string word = "";

		for (int i = 1; i <= length; i++) 
		{
			word += getRandomCharacter(charType);
		}

		return word;
	}


	static string generateKey(enCharType charType) 
	{
		string key = "";

		key = generateWord(4, charType) + "-";
		key += generateWord(4, charType) + "-";
		key += generateWord(4, charType) + "-";
		key += generateWord(4, charType);

		return key;
	}

	static void generateKeys(short numberOfKeys, enCharType charType) 
	{
		for (short i = 1; i <= numberOfKeys; i++) 
		{
			cout << "Key [" << i << "]  : ";
			cout << generateKey(charType) << endl;
		}
	}

	static void swap(int &a, int &b)
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}

	static void swap(double& a, double& b)
	{
		double temp;

		temp = a;
		a = b;
		b = temp;
	}

	static void swap(bool& a, bool& b)
	{
		bool temp;

		temp = a;
		a = b;
		b = temp;
	}

	static void swap(char& a, char& b)
	{
		char temp;

		temp = a;
		a = b;
		b = temp;
	}

	static void swap(string& a, string& b)
	{
		string temp;

		temp = a;
		a = b;
		b = temp;
	}

	static void swap(clsDate& a, clsDate& b) 
	{
		clsDate::swapDates(a, b);
	}

	static void shuffleArray(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++) 
		{
			swap(arr[randomNumber(1, arrLength) - 1], arr[randomNumber(1, arrLength) - 1]);
		}
	}


	static void shuffleArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			swap(arr[randomNumber(1, arrLength) - 1], arr[randomNumber(1, arrLength) - 1]);
		}
	}


	static void fillArrayWithRandomNumbers(int arr[], int arrLength, int from, int to)
	{
		for (int i = 0; i < arrLength; i++) 
		{
			arr[i] = randomNumber(from, to);
		}
	}

	static void fillArrayWithRandomWords(string arr[], int arrLength, enCharType charType, short wordLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = generateWord(wordLength, charType);
		}
	}

	static void fillArrayWithRandomKeys(string arr[], int arrLength, enCharType charType)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = generateKey(charType);
		}
	}

	static string tabs(short numberOfTabs) 
	{
		string t = "";

		for (int i = 1; i < numberOfTabs; i++) 
		{
			t = t + "\t";
		}

		return t;
	}

	static string encryptText(string text, short encryptionKey) 
	{
		for (short i = 0; i < text.length(); i++) 
		{
			text[i] = text[i] + encryptionKey;
		}

		return text;
	}


	static string decryptText(string text, short decryptionKey)
	{
		for (short i = 0; i < text.length(); i++)
		{
			text[i] = text[i] - decryptionKey;
		}

		return text;
	}


};


