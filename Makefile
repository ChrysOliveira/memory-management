IDIR = include
CC = gcc
CFLAGS = -I$(IDIR)

ODIR = obj
BDIR = binary
SDIR = src

LIBS = -lm

_DEPS = lista.h memory.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = lista.o memory.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 

run:
	$(BDIR)/main
