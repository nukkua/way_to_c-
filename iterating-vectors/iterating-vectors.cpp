#include <iostream>
#include <vector>

/* tengo el unsigned, const, auto, char, short, int, double, float,long, long long, inline, typedef, #define, using name = type */

int main () {
	std::vector<int>copyOfAVector {65,2,3,4,5};
	// Const pq no voy a hacer nada, solo mostrar
	// Por mas que en el type char entren los numeros 
	// los esta conviertiendo a su equivalente en ASCII
	// por lo tanto static_cast<int>("variable")

	std::cout<<"looping with auto const x \n";
	for (unsigned char const x:copyOfAVector){
		std::cout<<(&x)<<" ";
	}
	std::cout<<"\n looping with char x \n";
	for (unsigned char x:copyOfAVector){
		std::cout<<static_cast<int>(x)<<" ";
	}
}
