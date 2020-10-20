# Makefile for writing Make Files Example

# ********************************************
# Variables to control Makefile Operations
CXX = g++
CXXFLAGS = -Wall -g

# ***************************************************
# Targets needed to bring the executable up to date
progression_driver: progression_driver.o progression.o arith_progression.o geom_progression.o fibonacci_progression.o
	$(CXX) $(CXXFLAGS) -o progression_driver progression_driver.o progression.o arith_progression.o geom_progression.o fibonacci_progression.o

progression_driver.o: progression_driver.cc progression.h arith_progression.h geom_progression.h fibonacci_progression.h
	$(CXX) $(CXXFLAGS) -c progression_driver.cc

progression.o: progression.h

arith_progression.o: arith_progression.h progression.h

geom_progression.o: geom_progression.h progression.h

fibonacci_progression.o: fibonacci_progression.h progression.h
