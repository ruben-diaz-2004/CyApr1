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

// Constructor que limpia el std::multimap
Grades::Grades() {
  calificaciones_.clear();
}

/**
 * Función que escribe en el std::multimap a través de un fichero de texto.
 * @param std::fstream& archivo. Es el archivo de texto plano que contiene 
 * los alu y las calificaciones.
*/
void Grades::FileWrite(std::fstream& archivo){
  std::string clave{""};
  double puntuacion{0};
  while (archivo >> clave >> puntuacion) {
    calificaciones_.insert(std::make_pair(clave, puntuacion));
  }
}

/**
 * Función que sirve para imprimir por pantalla la lista de los 
 * alu y las calificaciones (el contenido del std::map)
*/
void Grades::Read() {
  std::string clave_anterior = "";
  for(const auto& par : calificaciones_) {
    if (par.first != clave_anterior) {
      std::cout << std::endl;
    
      std::cout << par.first;
      clave_anterior = par.first;
    }
    std::cout << " " << par.second;
  }
  std::cout << std::endl;
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

    calificaciones_.insert(std::make_pair(NuevaClave, NuevoValor));
    }
}