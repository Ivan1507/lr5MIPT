#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
   multimap<string,string> Dictionary;
   Dictionary.insert ( pair<string,string>("Hello","Привет") );
   Dictionary.insert ( pair<string,string>("Bye","Пока") );
   Dictionary.insert ( pair<string,string>("Cat","Кошка") );
   Dictionary.insert ( pair<string,string>("Fast","Быстрый") );
   Dictionary.insert ( pair<string,string>("Run","Бегать") );
   Dictionary.insert ( pair<string,string>("Jump","Прыгать") );
   Dictionary.insert ( pair<string,string>("Sleep","Спать") );
   Dictionary.insert ( pair<string,string>("Leap","Прыжок") );
   Dictionary.insert ( pair<string,string>("Red","Красный") );
   Dictionary.insert ( pair<string,string>("Healthy","Здоровый") );
   cout << "Англорусский словарь:\n";
   multimap<string,string>::iterator it;
   for (it = Dictionary.begin(); it != Dictionary.end();it++)
   {
      cout << it->first << "-" << it->second << endl;
   }


   Dictionary.clear();
}
