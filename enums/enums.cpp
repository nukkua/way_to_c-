#include <iostream>
#include <string>

// los enums
// permiten definir un conjunto  de constantes con nombres bajo un mismo
// paraguas
// los enums los indices default que tienen comienzan desde 0
int main() {
  std::cout << "Hello motherfucker"
            << "\n";

  // unscoped enums por la ausencia de la palabra class
  // esto puede provocar colisiones de nombres de enums
  // Aqui dia es un nuevo tipo de dato y, Lunes, Martes, etc son los posibles
  // valores que puede tomar el dia
  enum Dia { Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo };
  Dia hoy = Sabado;

  if (hoy == Sabado) {
    std::cout << "Me cago no es sabado!!! \n";
  }

  // scoped enums aqui estan confinados a scoped de nombres
  enum class day { Lunes, Martes, Miercoles, Jueves, Viernes };
  day d = day::Lunes;
  if (d == day::Lunes) {
    std::cout << "Hello mdf, its monday \n";
  }

  // como es tipo char desde -128 hasta 127 eso quiere decir
  // [2^7, (2^7)-1]
  // Tambien puedo definir sus indices respectivos en duro
  enum class daisy : char {
    mon, // mon = 2
    tue = 0,
    wed,
    thu,
    fri,
    sat,
    sun,
    mtn,
    tte,
    wtd,
    ttu,
    fti,
    stt,
    stn,
  };

  int kenum = static_cast<int>(daisy::mon);

  int valorRandom = 0;
  daisy daisy1 = static_cast<daisy>(valorRandom);

  daisy::tue == daisy::mon;

  if (daisy1 == daisy::mon && daisy1 == daisy::tue) {
    std::cout << "mierda entre los dos"
              << "\n";
  }
}
