#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int i;		
	char base[i] = "";
	string result;

	
	cout << "How many words do you want to limit?" << endl ;
	cin >> i ;
	
	cin.ignore();
	
	cout << "Please limit input " << i << " word" << endl ;
	cin.getline(base, i);
//	getline (cin,base);
	cout << base[i] << endl ;
	

//	result (base,i);
	
	for (int i= 0	; i<20 ; i++)
	{

	cout << base[i] << endl ;
		}	


//	
	
	return 0;
}
