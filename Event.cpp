#include <iostream>
#include <cstring>
using namespace std;
#include "Event.h"

void Event::display() const
{
  cout << "Event [code= " << code <<"] :" << endl;
  if (title != nullptr)
  {
    cout << title;
  }
  else
  {
    cout << "pas de titre!!" << endl;
  }
  cout << endl;
}

Event::Event()
{
  cout << "constructeur par defaut" << endl;
  code = 0;
  title = nullptr;
}
Event::~Event()
{
  cout << "destructeur" << endl;
  delete[] title;
}
int Event :: getCode() const
{
  return code;
}
const char* Event :: getTitle() const
{
  return title;
}
void Event :: setCode(int c)
{
  code = c;
}
void Event :: setTitle(const char* t)
{
  delete[] title;
  title = new char[strlen(t)+1];
    strcpy(title,t);
}
Event :: Event(int c, const char* t)
{
  cout << "constructeur d’initialisation" << endl;
  setCode(c);
  title = nullptr;
  setTitle(t);
}
Event :: Event(const Event& e)
{
  cout << "constructeur de copie" << endl;
  setCode(e.code);
  title = nullptr;
  if (e.title != nullptr)
  {
    setTitle(e.title);
  }
}