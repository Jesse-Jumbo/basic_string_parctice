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

    vector<string> res;				/*宣告一個字符串容器，用來存放最終分割後的內容*/ 
    string base;					/*宣告一個字串，用來輸入原始內容*/ 
    string word;				    /*宣告一個字串，用來暫存讀取到的原始內容*/ 
   
	getline(cin, base);				/*讀取輸入的整行字串在base*/ 
    stringstream input(base);		/*把input宣告成一個stringstream讓它可以用作輸出和輸入,再把base的字符串讀取進input*/ 

    while(input>>word)		     	/*當我把inphowut輸入到word中(這是肯定句)*/ 
        res.push_back(word);    	/*把字串word放進容器的最後*/ 

    for(int i=0;i<20;i++)           /*從第一項開始,判斷小於第20項,再從下一項開始*/
	{	 
        cout<<res[i]<<endl;			/*印出容器的內容*/ 
    }
    return 0;
}
