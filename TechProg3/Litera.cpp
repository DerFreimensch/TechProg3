#include "Litera.h"
#include <iostream>

PrintEdition::PrintEdition(){
	SetName("None");
	SetYear(0000);
	SetNamePublisher("None");
	SetPages(0);
	SetAnnotation("None");
}
void PrintEdition::SetName(std::string A) {
	Name.clear();
	Name = A;
}
void PrintEdition::SetYear(int A) {
	Year = A;
}
void PrintEdition::SetNamePublisher(std::string A) {
	NamePublisher.clear();
	NamePublisher = A;
}
void PrintEdition::SetPages(int A) {
	Pages = A;
}
void PrintEdition::SetAnnotation(std::string A) {
	Annotation.clear();
	Annotation = A;
}
std::string PrintEdition::GetName() {
	return this->Name;
}
int PrintEdition::GetYear() {
	return this->Year;
}
std::string PrintEdition::GetNamePublisher() {
	return this->NamePublisher;
}
int PrintEdition::GetPages() {
	return this->Pages;
}
std::string PrintEdition::GetAnnotation() {
	return this->Annotation;
}
void Journal::Data() {
	std::cout << "Name: " << GetName << '\n' << "Year: " << GetYear << '\n' << "Publisher name: " << GetNamePublisher << '\n' << "Number of pages: " << GetPages << '\n' << "Annotation: " << GetAnnotation << std::endl;
}
void Textbook::Data() {
	std::cout << "Name: " << GetName << '\n' << "Year: " << GetYear << '\n' << "Publisher name: " << GetNamePublisher << '\n' << "Number of pages: " << GetPages << '\n' << "Annotation: " << GetAnnotation << std::endl;
}
void Book::Data() {
	std::cout << "Name: " << GetName << '\n' << "Year: " << GetYear << '\n' << "Publisher name: " << GetNamePublisher << '\n' << "Number of pages: " << GetPages << '\n' << "Annotation: " << GetAnnotation << std::endl;
}
