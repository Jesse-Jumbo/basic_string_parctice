
#if 0
// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}
#endif

#if 0
// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}
#endif

#if 0
// string::assign
#include <iostream>
#include <string>

int main ()
{
  std::string str;
  std::string base="The quick brown fox jumps over a lazy dog.";

  // used in the same order as described above:

  str.assign(base);
  std::cout << str << '\n';

  str.assign(base,10,9);
  std::cout << str << '\n';         // "brown fox"

  str.assign("pangrams are cool",7);
  std::cout << str << '\n';         // "pangram"

  str.assign("c-string");
  std::cout << str << '\n';         // "c-string"

  str.assign(10,'*');
  std::cout << str << '\n';         // "**********"

  str.assign<int>(10,0x2D);
  std::cout << str << '\n';         // "----------"

  str.assign(base.begin()+16,base.end()-12);
  std::cout << str << '\n';         // "fox jumps over"

  return 0;
}
#endif

#if 0 /*有問題*/ 
#include <iostream>
#include <string>
/*#include <array> 不能用*/ 
using namespace std;

int main() {
	
	int i;		
	string base[i] = "";
	string result;
	
	cout << "How many words do you want to limit?" << endl ;
	cin >> i ;
	
	cin.ignore();
	
	cout << "Please limit input " << i << " word" << endl ;
	cin.ignore();
	getline(cin, base[i]);
	
	cout << base[1] << endl ;
	
for (int i= 0; i<20 ; i++)
	{

	cout << base[i] << endl ;
		}	
	return 0;
}
#endif

#if 0
// arrays as parameters
#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}
#endif 
  
#if 0
#include <string.h>
#include <iostream>
using namespace std;

int main() {
	char inpute[500];
	char*split;
	cin.getline (inpute,500);
	split = strtok (inpute," ");
	while (split != NULL)
  {
    printf ("%s \n",split);
    split = strtok (NULL, " ");
  }
  return 0;
}
#endif

#if 1
#include<iostream>
using namespace std;

int main(){
	
    int *word;
	string w1[1];
	char w2[1];
	char w3[1];	

	scanf("%s",&word);
	printf("\n%s",&word);
	
	scanf("%s",w1);
	printf("\n%s",w1);
	
	scanf("%s",w2[0]);
	printf("\n%s",w2[0]);
	
	scanf("%s",w3);
	printf("\n%s",w3);

	return 0;
}
#endif
