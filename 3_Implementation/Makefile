#Target_name : Dependencies
#<TAB>Command   


SRC = cancellation.c\
src/choice.c\
src/detailsofmovie.c\
src/movielist.c\
src/ticketprice.c\

OBJ = cancellation.o\
src/choice.o\
src/detailsofmovie.o\
src/movielist.o\
src/ticketprice.o\


INC = inc



CFLAGS = -I$(INC)

all.out :$(OBJ)
	$(CC) $^ -I$(INC) -o $@

%.o:src/%.c 
	gcc  $^ -I$(INC) -c

%.o:src/%.c 
	gcc $^ -I$(INC) -c

%.o:src/%.c 
	gcc $^ -I$(INC) -c

%.o:src/%.c 
	gcc  $^ -I$(INC) -c

%.o:src/%.c 
	gcc  $^ -I$(INC) -c
	



run: target
	./all.out
clean:
rm all.out *.o src/*.o
