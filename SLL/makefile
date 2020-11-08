objects := main.o
edit:$(objects)
	ar rcs liba.a $(object)
	gcc main.c liba.a -o main
	./main

.PHONY:clean
clean:
	-rm *.o
	-rm lib*.a
	-rm main
