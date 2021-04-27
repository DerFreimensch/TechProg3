#include "Litera.h"
#include <list>
#include <iostream>
std::list<Journal> journalList;
std::list<Textbook> textbookList;
std::list<Book> bookList;
void Menu();
void FillJ();
void FillT();
void FillB();
int main(void) {
	Menu();
	return 0;
}
void Menu() {
	int choose = 0;
	std::cout << "1) Add New Edition"<<'\n'<< 
			"2) Show Edition" << std::endl;
	std::cin >> choose;
	if (choose == 1) {
		int k = 0;
		std::cout << "1) Journal" << '\n' <<
			"2) Textbook" << '\n' <<
			"3) Book" << std::endl;
		std::cin >> k;
		if (k == 1) {
			FillJ();
		}
		else if (k == 2) {
			FillT();
		}
		else if (k == 3) {
			FillB();
		}
		else {
			std::cout << "There is a wrong option" << std::endl;
		}
	}
	else if (choose == 2) {
		int k = 0;
		std::cout << "1) Journal" << '\n' <<
			"2) Textbook" << '\n' <<
			"3) Book" << std::endl;
		std::cin >> k;
		if (k == 1) {
			for (auto& elem : journalList) {
				elem.Data();
			}
		}
		else if (k == 2) {
			for (auto& elem : textbookList) {
				elem.Data();
			}
		}
		else if (k == 3) {
			for (auto& elem : bookList) {
				elem.Data();
			}
		}
		else {
			std::cout << "There is a wrong option" << std::endl;
		}
	}
	else {
		std::cout << "There is a wrong option" << std::endl;
	}
	Menu();
}
void FillJ() {
	int choose = 1;
	int i = 0;
	std::string str;
	while (choose == 1) {
		Journal J;
		std::cout << "Print Name: ";
		std::cin >> str;
		J.SetName(str);
		str.clear();
		std::cout << "Print Year: ";
		std::cin >> i;
		J.SetYear(i);
		std::cout << "Print Name of publisher: ";
		std::cin >> str;
		J.SetNamePublisher(str);
		str.clear();
		std::cout << "Print Number of pages: ";
		std::cin >> i;
		if (i >= 0)
			J.SetPages(i);
		else
			J.SetPages(0);
		std::cout << "Print Annotation: ";
		std::cin >> str;
		J.SetAnnotation(str);
		str.clear();
		journalList.push_back(J);
		std::cout << "One more? 1-Yes 0-No" << std::endl;
		std::cin >> choose;
	}
}
void FillT() {
	int choose = 1;
	int i = 0;
	std::string str;
	while (choose == 1) {
		Textbook T;
		std::cout << "Print Name: ";
		std::cin >> str;
		T.SetName(str);
		str.clear();
		std::cout << "Print Year: ";
		std::cin >> i;
		T.SetYear(i);
		std::cout << "Print Name of publisher: ";
		std::cin >> str;
		T.SetNamePublisher(str);
		str.clear();
		std::cout << "Print Number of pages: ";
		std::cin >> i;
		if (i >= 0)
			T.SetPages(i);
		else
			T.SetPages(0);
		std::cout << "Print Annotation: ";
		std::cin >> str;
		T.SetAnnotation(str);
		str.clear();
		textbookList.push_back(T);
		std::cout << "One more? 1-Yes 0-No" << std::endl;
		std::cin >> choose;
	}
}
void FillB() {
	int choose = 1;
	int i = 0;
	std::string str;
	while (choose == 1) {
		Book B;
		std::cout << "Print Name: ";
		std::cin >> str;
		B.SetName(str);
		str.clear();
		std::cout << "Print Year: ";
		std::cin >> i;
		B.SetYear(i);
		std::cout << "Print Name of publisher: ";
		std::cin >> str;
		B.SetNamePublisher(str);
		str.clear();
		std::cout << "Print Number of pages: ";
		std::cin >> i;
		if (i >= 0)
			B.SetPages(i);
		else
			B.SetPages(0);
		std::cout << "Print Annotation: ";
		std::cin >> str;
		B.SetAnnotation(str);
		str.clear();
		bookList.push_back(B);
		std::cout << "One more? 1-Yes 0-No" << std::endl;
		std::cin >> choose;
	}
}