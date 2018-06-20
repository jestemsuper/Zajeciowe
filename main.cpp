#include <iostream>
#include "book.h"
#include "booklist.h"
#include "librarian.h"
#include "reader.h"
#include "library.h"
using namespace std;

int main()
{
	Library myLibrary;
	string l;
	int x;

	cout << "Log in to use the library" << endl << endl << "Your login: ";
	cin >> l;
	myLibrary.LogEmployee(l);
	system("cls");
	cout << "1. Przegladaj dostepne ksiazki" << endl << "2. Sortuj ksiazki" << endl << "3. Wyszukaj ksiazke" << endl << "4. Wypozycz ksiazke" << endl << "5. Zwroc ksiazke" << endl << "6. Pokaz wypozyczone ksiazki" << "7. Wyloguj sie" << endl;
	cin >> x;
	system("cls");
	if (x == 1)
	{
		cout << myLibrary.mylist;
	}
	else if (x == 2)
	{
		int y;
		cout << "SORTUJ" << endl << "1. Po tytule" << endl << "2. Po autorze" << endl << "3. Po dacie wydania" << endl;
		cin >> y;
		switch (y)
		{
		case 1:
		{
			myLibrary.mylist.TitleSort();
			break;
		}
		case 2:
		{
			myLibrary.mylist.AuthorSort();
			break;
		}
		case 3:
		{
			myLibrary.mylist.DateSort();
			break;
		}
		}
	}
	else if (x == 3)
	{
		int z;
		cout << "WYSZUKAJ" << endl << "1. Po tytule" << endl << "2. Po autorze" << endl << "3. Po numerze ISBN" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			string t;
			cout << "Podaj tytul: ";
			cin >> t;
			myLibrary.mylist.TitleSearch(t);
			break;
		}
		case 2:
		{
			string a;
			cout << "Podaj autora: ";
			cin >> a;
			myLibrary.mylist.AuthorSearch(a);
		}
		case 3:
		{
			string i;
			cout << "Podaj numer ISBN: ";
			cin >> i;
			myLibrary.mylist.ISBNSearch(i);
		}
		}
	}
	else if (x == 4)
	{
		int n;
		string id;
		cout << "Podaj numer karty czytelnika: ";
		cin >> n;
		cout << "Podaj numer ISBN ksiazki, ktora wypozycza czytelnik: ";
		cin >> id;
		myLibrary.BorrowBook(n, id);
	}
	else if (x == 5)
	{
		int n;
		string id;
		cout << "Podaj numer karty czytelnika: ";
		cin >> n;
		cout << "Podaj numer ISBN ksiazki, ktora zwraca czytelnik: ";
		cin >> id;
		myLibrary.ReturnBook(n, id);
	}
	else if (x == 6)
	{
		int n;
		string id;
		cout << "Podaj numer karty czytelnika: ";
		cin >> n;
		myLibrary.ShowReaBorrow(n);
	}
	else if (x == 7)
	{
		myLibrary.LogOutEmployee(l);
	}
	system("PAUSE");
	return 0;
}