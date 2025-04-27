#include <iostream>
#include<string>
#include <vector>
using namespace std;



// �������:
// ������ 1: ����� �� ����
//������ ��������, �����:
//    ���� ��� �� ����� (���� ���).
//    ��������� � ��������� ����� ���� ��� � ���� �����.
//    (���� � ����� ���������������� �� �������, ��������� �� ���������.)


vector<string> splitStringToVector(string& str, char delimeter) {

	vector<string> result;
	string word = "";

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != delimeter) 
		{
			word += str[i];
		}
		else 
		{
			result.push_back(word);
			word = "";
		}
	}
	result.push_back(word);

	return result;
}

int main()
{
	string input;
	getline(cin, input);

	vector<string> splitedInput = splitStringToVector(input, ' ');

	cout << splitedInput.size();
}

