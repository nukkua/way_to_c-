#include <iostream>

int suma ( int a , int b){
	return a + b;
}


inline int sumaVersion2 (int a , int b){
	return a + b;
}

int main () {
	std::cout<<"hello world \n";
	// Esto realiza una llamada a la funcion
	std::cout<<suma(99,1)<<"\n";

	// Esta funcion, pega su cuerpo encima literalmente
	std::cout<<sumaVersion2(9,1)<<"\n";
}


/*Ejemplo God
 * Cuando en nuestra receta dice poner sal, tendremos que revisar como poner sal, pero si en la receta  dice poner sal y ahi mismo como ponerla godddddd*/


/* La 1ra seria una funcion normal que hace una llamada, y la 2da seria una funcion que pega directamente su cuerpo */

// VENTAJAS
/*Por lo tanto las funciones inline son god, para funciones pequenas por que el costo de mantener la referencia del programa principal, la referencia de la funcion, los valores es nomas pesado */
// Al pegarse el codigo, el compilador puede hacer mejores optimizaciones
