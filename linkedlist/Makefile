
# *********************

CXX = g++
CXXFLAGS = -Wall -g
# ****************

EXECUTABLE = driver
# ****************

driver: linked_list_driver.o node.o linked_list.o
	$(CXX) $(CXXFLAGS) -o driver linked_list_driver.o node.o linked_list.o

linked_list_driver.o: linked_list_driver.cc linked_list.h
	$(CXX) $(CXXFLAGS) -c linked_list_driver.cc

node.o: node.h

linked_list.o: linked_list.h node.h

clean:
	/bin/rm -fv *.o $(EXECUTABLE)
