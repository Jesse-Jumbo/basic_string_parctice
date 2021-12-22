#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int i;		
	string base[i];
	string result;

	
	cout << "How many words do you want to limit?" << endl ;
	cin >> i ;
	
	cin.ignore();
	
	cout << "Please limit input " << i << " word" << endl ;
	getline (cin,base[i]);
	
/*	for (i=0; i<20;i++)
		result (base[i]);
		*/
	
	string result found = base.find_first_of(" ");
	whil (found!=string nops)
	{
		base[found] = "/n";
		found = base.find_first_of(" ",found+1);
	}
	
	cout << base << endl ;
	return 0;
}
