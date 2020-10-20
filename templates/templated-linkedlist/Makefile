
# *********************

CXX = g++
CXXFLAGS = -Wall -g
# ****************

EXECUTABLE = driver
HEADERS = linked_list.h node.h
# ****************

driver: linked_list_driver.o
	$(CXX) $(CXXFLAGS) -o driver linked_list_driver.o

linked_list_driver.o: linked_list_driver.cc
	$(CXX) $(CXXFLAGS) -c linked_list_driver.cc

# node.o: node.h
#
# linked_list.o: linked_list.h node.h

clean:
	/bin/rm -fv *.o $(EXECUTABLE)
