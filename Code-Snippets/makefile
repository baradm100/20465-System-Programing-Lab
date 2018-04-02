all:
	echo "Compailling all the *.c files...";\
	for i in *.c; do\
		gcc -Wall -ansi -pedantic "$$i" -o "$${i}_output";\
		echo "$$i";\
	done
try:
	for i in *.c; do\
		echo "$$i";\
	done
clean:
	rm -rf *_output
