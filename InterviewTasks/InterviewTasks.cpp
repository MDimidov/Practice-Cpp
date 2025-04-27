#include <iostream>
#include<string>
#include <vector>
#include<cctype>
#include<algorithm>
using namespace std;



// �������:
// ������ 1: ����� �� ����
//������ ��������, �����:
//    ���� ��� �� ����� (���� ���).
//    ��������� � ��������� ����� ���� ��� � ���� �����.
//    (���� � ����� ���������������� �� �������, ��������� �� ���������.)


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




//������ 2: �������� �� ���������
//������ ��������, �����:
//    ���� ���� ��� �� �����.
//    ��������� ���� ��� � ��������� (���� �� ������� ������ ������� � ������� ������).
//    �������� ������ � ����� �����.

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

