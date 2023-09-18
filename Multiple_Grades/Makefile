# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Asignatura: Computabilidad y Algoritmia
# 
# @author Rubén Díaz Marrero
# @date 16/09/2023
# 

CXX = g++
CXXFLAGS = -Wall -std=c++17 -g 



all: p01_multiple_grades

p01_multiple_grades: src/multiple_grades_main.o src/multiple_grades.o 
		$(CXX) $(CXXFLAGS) -o $@ $^
	
multiple_grades_main.o: src/multiple_grades_main.cc
		$(CXX) $(CXXFLAGS) -c $^

multiple_grades.o: src/multiple_grades.cc
		$(CXX) $(CXXFLAGS) -c $^
	
.PHONY: all clean
clean:
		rm -f src/*.o
		rm -f p01_single_grades