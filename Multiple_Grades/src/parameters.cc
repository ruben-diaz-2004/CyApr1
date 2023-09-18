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


/**
 * Comprueba que al programa se le pasen los parámetros adecuados
 * @param argc, número de argumentos
 * @param argv, cada argumento que se le pasa al programa
 * @param KcorrectNumber, número correcto de parámetros
 * @return true, si todo funciona bien.
*/
bool CheckCorrectParameters(const int argc, char* argv[], const int kCorrectNumber) {
  if (argc > 1) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << "Modo de uso: ./grades fichero_entrada.txt" << std::endl;
      std::cout << "Las calificaciones deben estar almacenadas en un fichero de texto ";
      std::cout << "en el que en cada linea se encuentra el alu del estudiante junto con ";
      std::cout << "la califacin correspondiente (ambos separados por un espacio en blanco)";
      std::cout << std::endl << std::endl;
    }
  }
  if (argc != kCorrectNumber) {
  std::cout << "Modo de uso: ./grades fichero_entrada.txt" << std::endl;
  std::cout << "Pruebe ./grades --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  return true;
}
