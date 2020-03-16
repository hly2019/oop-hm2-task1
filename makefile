all: main
main: main2.o CSsort.o SC.o SCcin.o SCcout.o Stucout.o Student.h StudentCollection.h Stuxy.o
	g++  main2.o CSsort.o SC.o SCcout.o SCcin.o Stucout.o Stuxy.o -o main
main2.o: main2.cpp Student.h StudentCollection.h
	g++ -c main2.cpp -o main2.o
CSsort.o: CSsort.cpp Student.h StudentCollection.h
	g++ -c CSsort.cpp -o CSsort.o
SC.o: SC.cpp Student.h StudentCollection.h
	g++ -c SC.cpp -o SC.o
SCcin.o: SCcin.cpp Student.h StudentCollection.h
	g++ -c SCcin.cpp -o SCcin.o
SCcout.o: SCcout.cpp Student.h StudentCollection.h
	g++ -c SCcout.cpp -o SCcout.o
Stucout.o: Stucout.cpp Student.h StudentCollection.h
	g++ -c Stucout.cpp -o Stucout.o
Stuxy.o: Stuxy.cpp Student.h StudentCollection.h
	g++ -c Stuxy.cpp -o Stuxy.o
clean:
	rm *.o main
