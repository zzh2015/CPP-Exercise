INC = -I/home/zzh/Opensource/build/release-install/include
LIB = -L/home/zzh/Opensource/build/release-install/lib -lmuduo_base -lmuduo_net -lpthread
OBJS = *.cpp
CC = g++
CFLAGS = -Wall -O2 -static
a.out:$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(INC) $(LIB) -std=c++11
clean:
	rm a.out
