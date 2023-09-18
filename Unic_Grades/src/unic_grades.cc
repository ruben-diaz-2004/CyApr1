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

// Constructor que limpia el std::map
Grades::Grades() {
  calificaciones_.clear();
}

/**
 * Función que escribe en el std::map a través de un fichero de texto
 * @param std::fstream& archivo. Es el archivo de texto plano que contiene 
 * los alu y las calificaciones.
*/
void Grades::FileWrite(std::fstream& archivo){
  while (archivo) {
    std::string clave;
    double puntuacion{0};
    archivo >> clave >> puntuacion;

    if(calificaciones_[clave] < puntuacion) {
      calificaciones_[clave] = puntuacion;
    };
  }
}

/**
 * Función que sirve para imprimir por pantalla la lista de los 
 * alu y las calificaciones (el contenido del std::map)
*/
void Grades::Read() {
  for(const auto& par : calificaciones_) {
    std::cout << par.first << ": " << par.second << std::endl;
  }
}

/**
 * Método que nos permite introducir nuevas claves y calificaciones 
 * de forma manual.
 * Cuando se llama a la función, podremos incluir todas las claves y 
 * calificaciones que queramos hasta que introduzcamos 'salir' como clave.
*/
void Grades::ManualWrite() {
  std::string NuevaClave;
  float NuevoValor;

  while (true) {
    std::cout << "Introduce un nuevo alu (o 'salir' para finalizar): ";
    std::cin >> NuevaClave;

    if (NuevaClave == "salir") {
      break;
    }

    std::cout << "Introduce un nuevo valor: ";
    std::cin >> NuevoValor;

    if(calificaciones_[NuevaClave] < NuevoValor) {
      calificaciones_[NuevaClave] = NuevoValor;
    }
    }
}