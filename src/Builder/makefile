CXX = g++ 
CFLAGS = -Wall -std=c++11
LDFLAGS =

target = _main
srcs = main.cpp AbstractBuilder.cpp ConcreteBuilder1.cpp ConcreteBuilder2.cpp Director.cpp Product.cpp
objs = $(srcs:.cpp=.o)
headers = $(wildcard *.h)


.PHONY: all
all: $(target)

$(target): $(objs) $(headers) FORCE
	$(CXX) -o $@ $(objs) $(LDFLAGS)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FORCE
FORCE: 

clean:
	rm -f $(target) *.o