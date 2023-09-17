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
#include "multiple_grades.h"

Grades::Grades() {
  calificaciones.clear();
}

void Grades::FileWrite(std::fstream& archivo){
  while (archivo) {
    std::string clave;
    double puntuacion{0};
    archivo >> clave >> puntuacion;

    calificaciones.insert(std::make_pair(clave, puntuacion));
  }
}

void Grades::Read() {
  std::string clave_anterior = "";
  for(const auto& par : calificaciones) {
    if (par.first != clave_anterior) {
      std::cout << std::endl;
    
      std::cout << par.first;
      clave_anterior = par.first;
    }
    std::cout << " " << par.second;
  }
  std::cout << std::endl;
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

    calificaciones.insert(std::make_pair(NuevaClave, NuevoValor));
    }
}