#include <iostream>
#include<string>
#include <vector>
#include<cctype>
#include<algorithm>
using namespace std;



// Условие:
// Задача 1: Брояч на думи
//Напиши програма, която:
//    Чете низ от текст (един ред).
//    Преброява и отпечатва колко думи има в този текст.
//    (Дума е всяка последователност от символи, разделени от интервали.)


//vector<string> splitStringToVector(string& str, char delimeter) {
//
//	vector<string> result;
//	string word = "";
//
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] != delimeter) 
//		{
//			word += str[i];
//		}
//		else 
//		{
//			result.push_back(word);
//			word = "";
//		}
//	}
//	result.push_back(word);
//
//	return result;
//}
//
//int main()
//{
//	string input;
//	getline(cin, input);
//
//	vector<string> splitedInput = splitStringToVector(input, ' ');
//
//	cout << splitedInput.size();
//}




//Задача 2: Проверка за палиндром
//Напиши програма, която:
//    Чете един низ от входа.
//    Проверява дали той е палиндром (чете се еднакво отляво надясно и отдясно наляво).
//    Игнорира главни и малки букви.

string isPolindrome(string str) {

	int index = str.size() - 1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == str[index]) {

			if (index == 0) {
				return "Yes";
			}

			index--;
			continue;
		}

		break;
	}

	return "No";
}


std::string toLower(const std::string& str) {
	std::string result = str;
	std::transform(result.begin(), result.end(), result.begin(), ::tolower);
	return result;
}

int main()
{
	string input;
	getline(cin, input);

	input = toLower(input);
	cout << isPolindrome(input);
}

