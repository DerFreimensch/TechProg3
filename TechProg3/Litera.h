#pragma once
#include <string>

class PrintEdition {
private:
	std::string Name;
	int Year;
	std::string NamePublisher;
	int Pages;
	std::string Annotation;
public:
	virtual void Data() = 0;
	void SetName(std::string A);
	void SetYear(int A);
	void SetNamePublisher(std::string A);
	void SetPages(int A);
	void SetAnnotation(std::string A);
	std::string GetName();
	int GetYear();
	std::string GetNamePublisher();
	int GetPages();
	std::string GetAnnotation();
	PrintEdition();

};

class Journal : public PrintEdition {
	void Data();
};

class Textbook : public PrintEdition {
	void Data();
};

class Book : public PrintEdition{
	void Data();
};

