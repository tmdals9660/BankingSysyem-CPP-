#ifndef __STRING_H__
#define __STRING_H__


	class String
	{
	private:
		char * str;
		int strLen;

	public:
		String();

		String(const char * str);

		String(const String& str);

		void operator = (const String& str);

		String& operator += (const String& str);

		String& operator +(const String& str)const;

		bool operator ==(const String& str);

		String& operator <<(const String& str);

		String& operator <<(const char * str);

		String& operator <<(const char str);

		String& operator << (String& (*fp)(String& str));

		void operator >> (String& str);

		friend ostream& operator<<(ostream& os, const String str);
		friend istream& operator>>(istream& is, String& arr);


		~String();
	};


	String& endl(String& str);
	


#endif // !__STRING_H__
