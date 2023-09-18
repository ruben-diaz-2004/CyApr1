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



all: p01_single_grades

p01_single_grades: src/grades_main.o src/unic_grades.o 
		$(CXX) $(CXXFLAGS) -o $@ $^
	
grades_main.o: src/grades_main.cc
		$(CXX) $(CXXFLAGS) -c $^

unic_grades.o: src/unic_grades.cc
		$(CXX) $(CXXFLAGS) -c $^
	
.PHONY: all clean
clean:
		rm -f src/*.o
		rm -f p01_single_grades