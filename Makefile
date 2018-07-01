dijkstra: src/*.c
	gcc -Wall -g src/*.c -o dijkstra
run:
	./dijkstra entrada.txt