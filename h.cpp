#include<string> 
#include <iostream> 
#include <Windows.h> 
using namespace std; 
/* 
 Подсчет количества гласных букв в строке; 
*/ 
int vowelCount(string str) { 
    int kolCount = 0; 
    string lettersLower = { 'a','e','u','o','i','y','а','е','ё','и','у','о','э','ю','я','ы' };//Список гласных 
    string lettersUp = { 'А','Е','Ё','И','У','О','Э','Ю','Я','Ы','A','E','U','O','I','Y' };//Список гласных 
    for (int i = 0; i < str.length(); i++) { 
        for (int j = 0; j < lettersUp.length(); j++) { 
            if (str[i] == lettersLower[j] || str[i] == lettersUp[j]) {//поиск гласных и перевод латинских букв в нижний регистр  
                kolCount++;// подсчет кол-во гласных 
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
    cout << "Введите строкy: " << endl; 
    getline(cin, str);//ввод строки 
    int kolCount=vowelCount(str); 
    cout << "В строке " << kolCount << " гласных букв";
   cout<<"Enter "<<endl;
	string str2="";
	getline(cin, str2);
	kolCount=vowelCount(str2);
 cout << "я┐╜ я┐╜я┐╜рокя┐╜ " << kolCount << " я┐╜я┐╜я┐╜я┐╜я┐╜я┐╜я┐╜ я┐╜укв"; 
    return 0; 
}
