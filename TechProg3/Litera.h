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
	virtual void Data() const = 0;
	void SetName(const std::string &A);
	void SetYear(int A);
	void SetNamePublisher(const std::string &A);
	void SetPages(int A);
	void SetAnnotation(const std::string &A);
	std::string GetName() const;
	int GetYear() const;
	std::string GetNamePublisher() const;
	int GetPages() const;
	std::string GetAnnotation() const;
	PrintEdition();
	PrintEdition(const PrintEdition &A);
};

class Journal : public PrintEdition {
public:
	void Data () const;
};

class Textbook : public PrintEdition {
public:
	void Data() const;
};

class Book : public PrintEdition{
public:
	void Data() const;
};

