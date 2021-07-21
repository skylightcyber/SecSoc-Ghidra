SRC=$(wildcard *.c)
BINS=$(SRC:%.c=%)

all: $(BINS)

clean:
	rm -f $(BINS)
