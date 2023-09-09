main: main.c glx.c
	gcc -Wall -Wextra -o main main.c glx.c -lX11 -lGL

.PHONY: clean

clean:
	rm main
