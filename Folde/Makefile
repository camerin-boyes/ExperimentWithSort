CXX = g++
OBJS = main.o sorts.o
CXXFLAGS = -Wall -std=c++11
RM = rm -rf

all:	ExptWithSort

ExptWithSort:	$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o:	%.cpp
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

clean:
	$(RM) ExptWithSort $(OBJS)
