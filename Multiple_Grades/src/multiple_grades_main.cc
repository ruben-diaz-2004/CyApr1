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
#include "parameters.cc"
#include "multiple_grades.h"


int main(int argc, char *argv[]) {
  CheckCorrectParameters(argc, argv, 2);

  std::fstream input_file{argv[1]};
  
  Grades mis_notas;
  mis_notas.FileWrite(input_file);
  mis_notas.Read();
  mis_notas.ManualWrite();
  mis_notas.Read();

  return 0;
}