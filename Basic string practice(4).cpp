#if 0

#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i = 0 ;
	string base;
	string word;
	string result[20];
	
	getline(cin,base);
	
	while(i<20)
	{
		cout<<base<<endl;
		if(base[i] == " "){
			
		
			word += base;
	}
		result[i].append(word);
		
		if(result[i] == word)
			word.clear();
		
		i+=1;
			
			
			
	}
	
	
	
	
	return 0;
}

#endif

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<istream>
using namespace std;

int main(){

    vector<string> res;				/*�ŧi�@�Ӧr�Ŧ�e���A�ΨӦs��̲פ��Ϋ᪺���e*/ 
    string base;					/*�ŧi�@�Ӧr��A�Ψӿ�J��l���e*/ 
    string word;				    /*�ŧi�@�Ӧr��A�ΨӼȦsŪ���쪺��l���e*/ 
   
	getline(cin, base);				/*Ū����J�����r��bbase*/ 
    stringstream input(base);		/*��input�ŧi���@��stringstream�����i�H�Χ@��X�M��J,�A��base���r�Ŧ�Ū���iinput*/ 

    while(input>>word)		     	/*��ڧ�inphowut��J��word��(�o�O�֩w�y)*/ 
        res.push_back(word);    	/*��r��word��i�e�����̫�*/ 

    for(int i=0;i<20;i++)           /*�q�Ĥ@���}�l,�P�_�p���20��,�A�q�U�@���}�l*/
	{	 
        cout<<res[i]<<endl;			/*�L�X�e�������e*/ 
    }
    return 0;
}
