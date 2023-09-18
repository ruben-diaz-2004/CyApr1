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

class Grades{
  public:
  Grades();
  void FileWrite(std::fstream& archivo);
  void Read();
  void ManualWrite();


  private:
  std::multimap<std::string, float> calificaciones_;
};