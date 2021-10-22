
all: app.exe

app.exe: main.obj CompareString.obj CreatePerson.obj defperson.obj Print.obj sort.obj
	link /out:app.exe main.obj CompareString.obj CreatePerson.obj defperson.obj Print.obj sort.obj
main.obj: main.c Header.h
	cl /c main.c
CompareString.obj: CompareString.c
	cl /c CompareString.c
CreatePerson.obj: CreatePerson.c Header.h
	cl /c CreatePerson.c
defperson.obj: defperson.c Header.h
	cl /c defperson.c 
Print.obj: Print.c Header.h
	cl /c Print.c 
sort.obj: sort.c Header.h
	cl /c sort.c 
	
