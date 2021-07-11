#for windows environments
#compile with: gcc -fPIC -c -o dynamic.o dynamic.c && gcc -shared -o libdynamic.dll dynamic.o
# gcc -c (create object code)   |   -fPIC = position independent code 
#-shared  this option enables platform-dependent format

#for linux environments
#compile with: gcc -fPIC -c -o dynamic.o dynamic.c && gcc -shared -o libdynamic.dll dynamic.o
# gcc -c (create object code)   |   -fPIC = position independent code 
#-shared  this option enables platform-dependent format
#Before running the bin file
#LD_LIBRARY_PATH=. && export LD_LIBRARY_PATH

libdynamic.dll: dynamic.o
	gcc -shared -o ../bin/libdynamic.dll ../obj/dynamic.o

dynamic.o: dynamic.c
	gcc -fPIC -c -o ../obj/dynamic.o dynamic.c
