#include <iostream> // instruye al compilador de incluir las declaraciones de el standar stream I/O

// En pocas el retorno de la funcion main, definira si la ejecucion del programa
// fue exitosa con un 0 y si es !=0, es por que fallo, asi el os se da cuenta
int main() {

  int x = 0;

  short bit16;
  int bit32;
  long bit64;
  long bit128;

  float f32bit;
  double f64bit;
  long double f80bit;

  int a = 4;
  int b = 10;

  b = a++; // primero asigna, luego incrementa, en pocas retorna el antiguo
           // valor
  std::cout << "prefix at the right " << b << "\n";
  b = ++a; // incrementa y luego asigna en pocas retorna el nuevo valor
  std::cout << "prefix at the left " << b << "\n";

  unsigned int value = 10;

  int value2 = value;
	
}
