#include<string> 
#include <iostream> 
#include <Windows.h> 
using namespace std; 
/* 
 ������ ������⢠ ������ �㪢 � ��ப�; 
*/ 
int vowelCount(string str) { 
    int kolCount = 0; 
    string lettersLower = { 'a','e','u','o','i','y','�','�','�','�','�','�','�','�','�','�' };//���᮪ ������ 
    string lettersUp = { '�','�','�','�','�','�','�','�','�','�','A','E','U','O','I','Y' };//���᮪ ������ 
    for (int i = 0; i < str.length(); i++) { 
        for (int j = 0; j < lettersUp.length(); j++) { 
            if (str[i] == lettersLower[j] || str[i] == lettersUp[j]) {//���� ������ � ��ॢ�� ��⨭᪨� �㪢 � ������ ॣ����  
                kolCount++;// ������ ���-�� ������ 
                break; 
            } 
        } 
    } 
    return kolCount; 
} 
int main() 
{ 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    string str=""; 
    cout << "������ ��பy: " << endl; 
    getline(cin, str);//���� ��ப� 
    int kolCount=vowelCount(str); 
    cout << "� ��ப� " << kolCount << " ������ �㪢";
   cout<<"Enter "<<endl;
	string str2="";
	getline(cin, str2);
	kolCount=vowelCount(str2);
 cout << "� ��ப� " << kolCount << " ������� �㪢"; 
    return 0; 
}
