#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
   multimap<string,string> Dictionary;
   Dictionary.insert ( pair<string,string>("Hello","������") );
   Dictionary.insert ( pair<string,string>("Bye","����") );
   Dictionary.insert ( pair<string,string>("Cat","�����") );
   Dictionary.insert ( pair<string,string>("Fast","�������") );
   Dictionary.insert ( pair<string,string>("Run","������") );
   Dictionary.insert ( pair<string,string>("Jump","�������") );
   Dictionary.insert ( pair<string,string>("Sleep","�����") );
   Dictionary.insert ( pair<string,string>("Leap","������") );
   Dictionary.insert ( pair<string,string>("Red","�������") );
   Dictionary.insert ( pair<string,string>("Healthy","��������") );
   cout << "������������ �������:\n";
   multimap<string,string>::iterator it;
   for (it = Dictionary.begin(); it != Dictionary.end();it++)
   {
      cout << it->first << "-" << it->second << endl;
   }


   Dictionary.clear();
}
