OBJ = main.o pascal.o
APPNAME = triangle

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -g -c -o $@ $<

clean:
	rm $(OBJ) $(APPNAME)

