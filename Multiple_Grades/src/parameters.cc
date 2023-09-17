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
 * Imprime la función del programa
*/
void PrintProgramPurpose() {
  std::cout << "La función del programa es encriptar y/o desencriptar ficheros de texto" << std::endl << std::endl;
}

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
      std::cout << "Modo de uso: ./cripto fichero_entrada fichero_salida método password operación" << std::endl << std::endl;
      std::cout << "fichero_entrada: Fichero a codificar" << std::endl;
      std::cout << "fichero_salida:  Fichero codificado" << std::endl;
      std::cout << "método:          Indica el método de encriptado" << std::endl;
      std::cout << "                   1: Cifrado xor" << std::endl;
      std::cout << "                   2: Cifrado de César" << std::endl;
      std::cout << "password:        Palabra secreta en el caso de método 1, Valor de K en el método 2" << std::endl;
      std::cout << "operación:       Operación a realizar en el fichero" << std::endl;
      std::cout << "                   +: encriptar el fichero" << std::endl;
      std::cout << "                   -: desencriptar el fichero" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != kCorrectNumber) {
  std::cout << "Modo de uso: ./cripto fichero_entrada fichero_salida método password operación" << std::endl;
  std::cout << "Pruebe ./cripto --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  return true;
}
