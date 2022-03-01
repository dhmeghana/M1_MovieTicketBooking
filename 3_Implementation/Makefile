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

#CXX = cpp
#CC = gcc
#AS = as
#LD =  ld


CFLAGS = -I$(INC)
# -DMACROS_value
# -g
# -v 

#ASFLAGS
#LDFLAGS = -Lpath_lib_lname
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
