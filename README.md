# Compile C to `.so` file

```
gcc -c -fPIC hello.c -o hello.o
```  


```
gcc hello.o -shared -o libhello.so
```  
