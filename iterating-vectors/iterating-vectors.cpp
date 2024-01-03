#include <iostream>
#include <vector>


inline void printVector (std::vector<int> entryVector){
	std::cout<<"Last vector"<<"\n";
	for (unsigned char x:entryVector){
		std::cout<<static_cast<int>(x)<<" ";
	}
}

/* tengo el unsigned, const, auto, char, short, int, double, float,long, long long, inline, typedef, #define, using name = type */

int main () {
	std::vector<int>copyOfAVector {65,2,3,4,5};
	// Por mas que en el type char entren los numeros 
	// los esta conviertiendo a su equivalente en ASCII
	// por lo tanto static_cast<int>("variable")

	//COUT
	
	// Const pq no voy a hacer nada, solo mostrar
	std::cout<<"looping with auto const x \n";
	for (const unsigned char x:copyOfAVector){
		std::cout<<(&x)<<" "; // & simple puntero
	}
	// Aqui si puedo modificar los valores picadooooo
	std::cout<<"\n looping with char x \n";
	printVector(copyOfAVector);

	//CIN
	
	// Bueno ahora para ingresar datos, supongo que al puntero nooooooo?????
	// ya se por que no se puede ir al revez
	// pq estaria tratando de modificar el valor del puntero
	// likeeee wtff??????? soy gil
	// y si o si o auto si no se el tipo, o el tipo original del vector, no se le puede poner const
	for(auto& x: copyOfAVector){
		std::cin>>x;
	}
	printVector(copyOfAVector);


}
// el type auto no puede ser unsigned


/* Bueno hay una diferencia clara entre puntero y referencia */
/* la referencia no puede cambiar, es la posicion de memoria de un objeto, el puntero es la posicion de memoria de un objeto pero puede apuntar a otra objeto */
