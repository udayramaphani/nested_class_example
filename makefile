TARGET = ../execs/nested_class_example

CXX = g++
CXXFLAS = -Wall -g

OBJS = \
	main.o \
	student.o \
	teacher.o \
	course.o

INCLUDES = \
	student.h \
	teacher.h \
	course.h

SRC = \
	main.cpp \
	student.cpp \
	teacher.cpp \
	course.cpp

REBUILD = \
	$(OBJS) $(TARGET)

clean:
	rm -f $(REBUILD)
	echo Clean done

all: $(TARGET)
	echo All done

$(TARGET) : $(OBJS)
	$(CXX) $(CXXFLAS) -o $@ $^

%.o : %.cpp
	$(CXX) $(CXXFLAS) -o $@ -c $<

main.o : course.h
course.o : course.h
student.o : student.h
teacher.o : teacher.h

#g++ -$(INCLUDES) -o execs/nested_class student.cpp teacher.cpp course.cpp

