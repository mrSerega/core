#ifndef __STRUCT_MODULES_H__
#define __STRUCT_MODULES_H__

//#include <struct_tto.h> //TODO: include this
//#include <tto_api.h> //TODO: include this
#include <string>


typedef int SIGNAL_TYPE; //TODO: delete this
typedef int TTO_API; //TODO: delte this




// Структура информации о модуле
//-------------------------------------------------------------------------
class IModule
//-------------------------------------------------------------------------
{
private:
   void        *handle;     // Указатель на загруженный модуль в памяти
   std::string file_name;   // Имя файла с модулем
   bool        m_lock;
 
   // Указатели на функции модуля
   void  (*onLoad)           (const int, char **, TTO_API *);
   const char* (*getName)    ();
   void  (*onInit)           (const bool restart);
   void  (*run)              ();
   void  (*onMessageReceive) (int , const void *, std::size_t,  const char *source);
   void  (*onChangeAvtoMode) (const bool avto);
   void  (*onSignal)         (SIGNAL_TYPE signal, int val1, int val2);

   void  lock (bool lock)        { m_lock = lock;}
   bool  islock ()               { return m_lock;}

public:
   IModule () : 
      handle (0), 
      m_lock (false),
      onLoad (0),
      getName (0),
      onInit (0),
      run (0),
      onMessageReceive (0),
      onChangeAvtoMode (0),
      onSignal (0)
      {};
};


#endif
