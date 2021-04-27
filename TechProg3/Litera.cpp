#include "Litera.h"
#include <iostream>
#include <list>

PrintEdition::PrintEdition(){
	SetName("None");
	SetYear(0000);
	SetNamePublisher("None");
	SetPages(0);
	SetAnnotation("None");
}
PrintEdition::PrintEdition(const PrintEdition& A) {
	this->SetName(A.GetName());
	this->SetYear(A.GetYear());
	this->SetNamePublisher(A.GetNamePublisher());
	this->SetPages(A.GetPages());
	this->SetAnnotation(A.GetAnnotation());
}
void PrintEdition::SetName(const std::string &A) {
	Name.clear();
	Name = A;
}
void PrintEdition::SetYear(int A) {
	Year = A;
}
void PrintEdition::SetNamePublisher(const std::string &A) {
	NamePublisher.clear();
	NamePublisher = A;
}
void PrintEdition::SetPages(int A) {
	Pages = A;
}
void PrintEdition::SetAnnotation(const std::string &A) {
	Annotation.clear();
	Annotation = A;
}
std::string PrintEdition::GetName() const{
	return this->Name;
}
int PrintEdition::GetYear() const {
	return this->Year;
}
std::string PrintEdition::GetNamePublisher() const {
	return this->NamePublisher;
}
int PrintEdition::GetPages() const{
	return this->Pages;
}
std::string PrintEdition::GetAnnotation() const{
	return this->Annotation;
}
void Journal::Data() const{
	std::cout << "Type: " << "Journal" <<"Name: " << this->GetName() << '\n' << "Year: " <<
		this->GetYear() << '\n' << "Publisher name: " << 
		this->GetNamePublisher() << '\n' << "Number of pages: " << 
		this->GetPages() << '\n' << "Annotation: " << 
		this->GetAnnotation() << '\n' << std::endl;
}
void Textbook::Data() const{
	std::cout << "Type: " << "TextBook" << "Name: " << this->GetName() << '\n' << "Year: " <<
		this->GetYear() << '\n' << "Publisher name: " << 
		this->GetNamePublisher() << '\n' << "Number of pages: " << 
		this->GetPages() << '\n' << "Annotation: " << 
		this->GetAnnotation() << '\n' << std::endl;
}
void Book::Data() const{
	std::cout << "Type: " << "Book" << "Name: " << this->GetName() << '\n' << "Year: " <<
		this->GetYear() << '\n' << "Publisher name: " << 
		this->GetNamePublisher() << '\n' << "Number of pages: " << 
		this->GetPages() << '\n' << "Annotation: " << 
		this->GetAnnotation() << '\n' << std::endl;
}
void PrintEdition::Data() const {
	std::cout << "Type: " << "PrintEdition" << "Name: " << this->GetName() << '\n' << "Year: " <<
		this->GetYear() << '\n' << "Publisher name: " << 
		this->GetNamePublisher() << '\n' << "Number of pages: " << 
		this->GetPages() << '\n' << "Annotation: " << 
		this->GetAnnotation()  << '\n' << std::endl;
}

