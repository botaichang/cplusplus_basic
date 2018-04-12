//read file
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
	ifstream infile("out.txt",ios::in|ios::binary);
	if(!infile)
	{
		cout<<"file not exit"<<endl;
		return 0;
	}
	while(infile.read((char*) &s,sizeof(s)))
	{
		int nReadBytes = infile.gcount();
		cout <<s.name <<" "<< s.nscore <<endl;
	}
	infile.close();
	

	return 0;
}
