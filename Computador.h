#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include <string>

class Computador {
public:
	
	Computador();
	void instalarSistemaOperacional();
	void iniciarSistemaOperacional();
	void iniciarPerfilUsuario();
      
protected:
	
       int memoriaRAM;
	   static int hd;
	   int nucleoProcessador;
       string processador;
	   string placaMae;
	   string placaVideo; 
	   string nomeUsuario;
	   string senhaUsuario;
	   string tipoUsuario;    
       
};

#endif
