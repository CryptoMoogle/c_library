//compile with: gcc -c -o static.o static.c && ar rcs libstatic.a static.o
// gcc -c (create object code)   |   ar rcs
//-c: Create an object file
//c:  The specified archive is always created if it did not exist
//r:  Insert the files member... into archive (with replacement)
//s:  Write an object-file index into the archive, or update an existing one

int subber(int a, int b){

    int c;

    c = a - b;

    return c;
}
