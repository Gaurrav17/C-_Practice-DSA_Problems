#include<iostream>
#include<fstream>
using namespace std;

int main(){
     
    /* ofstream hout("sample.txt");

     string name;
     cout<<"enter your namem :"<<endl;
     cin>>name;


hout<<name<<" is my name";

hout.close();

ifstream hin("sample.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            hin>>content;
           cout<<"The content of the file is: "<<content;
 
           // disconnecting our file
           hin.close();
           return 0;*/
           ofstream out;
           out.open("sample.txt");

           out<<"this is me";
           out<<"this is also me";

           ifstream in;
           string s;
           in.open("sample.txt");
            while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in, s);
        cout<<s<<endl;
    }
    return 0;
}




