output: calculator.o Testcalculator.o
	gcc calculator.o Testcalculator.o -o Testcalculator

calculator.o: calculator.c calculator.h
	gcc -c calculator.c

Testcalculator.o: Testcalculator.c calculator.h
	gcc -c Testcalculator.c

clean:
	rm*.o Testcalculator

gcc Testcalculator.c calculator.c unity/src/unity.c -o Testcalculator.exe
