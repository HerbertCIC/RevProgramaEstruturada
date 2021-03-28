
CC = gcc
CFLAGS = -O2 -lm

all: 	exemplo_00 exemplo_01 exemplo_02 exemplo_03 \
			exemplo_04 exemplo_05 exemplo_06 exemplo_07 \
			exemplo_08 exemplo_09 exemplo_10 exemplo_11 

exemplo_00: main.c
	$(CC) $(CFLAGS) main.c -o exemplo_00

exemplo_01: main_2.c
	$(CC) $(CFLAGS) main_2.c -o exemplo_01

exemplo_02: main_3.c
	$(CC) $(CFLAGS) main_3.c -o exemplo_02

exemplo_03: main_4.c
	$(CC) $(CFLAGS) main_4.c -o exemplo_03

exemplo_04: main_5.c
	$(CC) $(CFLAGS) main_5.c -o exemplo_04

exemplo_05: main_6.c
	$(CC) $(CFLAGS) main_6.c -o exemplo_05

exemplo_06: main_7.c
	$(CC) $(CFLAGS) main_7.c -o exemplo_06

exemplo_07: main_8.c
	$(CC) $(CFLAGS) main_8.c -o exemplo_07

exemplo_08: main_9.c
	$(CC) $(CFLAGS) main_9.c -o exemplo_08

exemplo_09: main_10.c
	$(CC) $(CFLAGS) main_10.c -o exemplo_09

exemplo_10: main_11.c
	$(CC) $(CFLAGS) main_11.c -o exemplo_10

exemplo_11: main_12.c
	$(CC) $(CFLAGS) main_12.c -o exemplo_11

clean:
	rm exemplo_*
	