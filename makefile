CC=g++
CFLAGS= -g -Wall

HeapStudents: main.o student.o date.o address.o
				$(CC) $(CFLAGS) main.o student.o date.o address.o -o HeapStudents

main.o: main.cpp student.h	
				$(CC) $(CFLAGS) -c main.cpp

student.o: student.cpp student.h address.h date.h
				$(CC) $(CLFAGS) -c student.cpp

address.o: address.cpp address.h date.h 
				$(CC) $(CFLAGS) -c address.cpp

date.o: date.cpp date.h
				$(CC) $(CFLAGS) -c date.cpp


clean:
				rm -f *.o
				rm -f HeapStudents
				rm -f fullReport.txt
				rm -f shortReport.txt

run: HeapStudents
				./HeapStudents

valgrind: HeapStudents
				valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./HeapStudents

				
