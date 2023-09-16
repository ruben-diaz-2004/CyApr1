  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Computabilidad y Algoritmia 2023-2024
  *
  * @author Rubén Díaz Marrero 
  * @date 16/09/2023
  * @brief Este programa lee ficheros de texto que contienen calificaciones
  * de estudiantes.
  */

#include <iostream>
#include <fstream>
#include <map>
#include "unic_grades.h"

Grades::Grades() {
  calificaciones.clear();
}

void Grades::FileWrite(std::fstream& archivo){
  while (archivo) {
    std::string clave;
    double puntuacion{0};
    archivo >> clave >> puntuacion;

    if(calificaciones[clave] < puntuacion) {
      calificaciones[clave] = puntuacion;
    };
  }
}

void Grades::Read() {
  for(const auto& par : calificaciones) {
    std::cout << par.first << ": " << par.second << std::endl;
  }
}

void Grades::ManualWrite() {
  std::string NuevaClave;
  float NuevoValor;

  while (true) {
    std::cout << "Introduce una nueva clave (o 'salir' para finalizar): ";
    std::cin >> NuevaClave;

    if (NuevaClave == "salir") {
      break;
    }

    std::cout << "Introduce un nuevo valor: ";
    std::cin >> NuevoValor;

    calificaciones[NuevaClave] = NuevoValor;
    }
}