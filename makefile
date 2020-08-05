
CXX = g++
CXXFLAGS = -Wall -g -std=c++11



combat: main.o Utilities.o Barbarian.o Bluemen.o HarryPotter.o Medusa.o Vampire.o Character.o
	$(CXX) $(CXXFLAGS) -o combat main.o Utilities.o Barbarian.o Bluemen.o HarryPotter.o Medusa.o Vampire.o Character.o

main.o: main.cpp Utilities.h Barbarian.h Bluemen.h HarryPotter.h Medusa.h Vampire.h Character.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Utilities.o: Utilities.h
	$(CXX) $(CXXFLAGS) -c Utilities.cpp

Barbarian.o: Barbarian.h
	$(CXX) $(CXXFLAGS) -c Barbarian.cpp

Bluemen.o: Bluemen.h
	$(CXX) $(CXXFLAGS) -c Bluemen.cpp

HarryPotter.o: HarryPotter.h
	$(CXX) $(CXXFLAGS) -c HarryPotter.cpp

Medusa.o: Medusa.h
	$(CXX) $(CXXFLAGS) -c Medusa.cpp

Vampire.o: Vampire.h
	$(CXX) $(CXXFLAGS) -c Vampire.cpp

Character.o: Character.h
	$(CXX) $(CXXFLAGS) -c Character.cpp

clean:
	rm -f *o combat