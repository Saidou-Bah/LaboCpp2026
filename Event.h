#ifndef EVENT_H
#define EVENT_H

class Event 
{
private: 
  int code;
  char* title;
public:
  Event();
  ~Event();
  int getCode() const;
  void setCode(int);
  const char* getTitle() const;
  void setTitle(const char*);
  void display() const;
  Event(int c, const char* t);
  Event(const Event& e);
  
};
#endif