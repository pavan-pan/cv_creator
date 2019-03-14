CC=g++
CFLAGS=-I.
DEPS = position.h CV_parts.h education_qual.h 
OBJ = main.o CV_parts.o education_qual.o position.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

cvmake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
