#include "MiniBankingCommonDecl.h"
#include "String.h"


String::String()
{
	strLen = 0;
	str = NULL;
}
String::String(const char * str2)
{
	strLen = strlen(str2) + 1;
	str = new char[strLen];
	strcpy(str, str2);
}

String::String(const String &ref)
{
	//delete[] str;
	strLen = ref.strLen;
	str = new char[strLen];
	strcpy(str, ref.str);
}
void String::operator = (const String& str)
{
	strLen = strlen(str.str);
	this->str = new char[strLen + 1];
	strcpy(this->str, str.str);
}


String& String::operator += (const String& str)
{
	char * sstr = new char[this->strLen + str.strLen + 1];
	strcpy(sstr, this->str);
	strcat(sstr, str.str);

	delete this->str;
	this->str = new char[this->strLen + str.strLen + 1];
	strcpy(this->str, sstr);

	delete sstr;

	return *this;
}


String& String::operator +(const String& str)const
{
	char * sstr = new char[this->strLen + str.strLen + 1];
	strcpy(sstr, this->str);
	strcat(sstr, str.str);
	String temp(sstr);
	delete sstr;
	return temp;
}

bool String::operator ==(const String& str)
{
	return strcmp(this->str, str.str);
}

String& String::operator <<(const String& str)
{
	printf("%s", str.str);
	return *this;
}

String& String::operator <<(const char str)
{
	printf("%c", str);
	return *this;
}

String& String::operator <<(const char * str)
{
	printf("%s", str);
	return *this;
}

String& String::operator << (String& (*fp)(String& str))
{
	return fp(*this);
}

void String::operator >> (String& str)
{
	char str_tmp[256];
		
	rewind(stdin);

	String tmp(str_tmp);
	str = tmp;
}

String::~String()
{
	if (str != NULL) {
		delete str;
	}
}

String& endl(String& str)
{
	str << '\n';
	rewind(stdout);

	return str;
}

ostream& operator<<(ostream& os, const String str)
{
	os << str.str;
	return os;
}


istream& operator>>(istream& is, String& arr)
{
	char* temp = new char[1000];
	is >> temp;
	arr = String(temp);

	delete[] temp;

	return is;
}