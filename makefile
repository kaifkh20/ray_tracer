all: ray

ray:
	g++ -O2 ray.cpp -o ray

ray.o : ray.cpp
			g++ -c ray.cpp

run : ray
	./ray > image.ppm

clean :
	rm ray.o ray