#ifndef STRING_HPP_
#define STRING_HPP_
class String{ 
private: 
        char *str;
public:
	String(); //constructor 
	char* operator=(const char *s); //operator= 
	String& operator=(const String &s);
	const char *c_str(); 
        ~String();   //deconstructor
	void printValue();

};
#endif
