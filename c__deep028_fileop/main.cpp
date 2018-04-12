#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class CStudent{
	public: 
		char name[20];
		int  nscore; 
};

int main()
{
	CStudent s; 
	ofstream outfile("out.txt",ios::in|ios::binary);
	while(cin>> s.name >> s.nscore)
	{
		if(strcmp(s.name,"exit") ==0)
			break;
		outfile.write((char*) &s, sizeof(s));
	}
	outfile.close();
	return 0;
}
