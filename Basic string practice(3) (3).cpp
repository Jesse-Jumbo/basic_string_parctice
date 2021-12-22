#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string base = "";
	string world;
	string result[];
	
	while (true)
	{
		base = cin.peek();
		
		if (base.empty())
			cout << "\n";
			
		if ("\n">20)
			break;
	
		cin >> base ;
		cin.get();
		cout << base << endl ;
	}
	
	return 0;
}
