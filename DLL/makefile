add : 
	gcc -shared -fPIC rank.c -o librank.so
	gcc main.c librank.so -o main
	LD_LIBRARY_PATH=${shell pwd} ./main

.PHONY : clean
clean :
	-rm lib*.so
	-rm main