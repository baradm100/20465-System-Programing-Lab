all:
	echo "Compiling all the *.c files...";\
	for i in *.c; do\
		echo "------- Compiling $$i:";\
		gcc -Wall -ansi -pedantic "$$i" -o "$${i}_output";\
		echo "-------------- Done $$i";\
	done
try:
	for i in *.c; do\
		echo "$$i";\
	done
clean:
	rm -rf *_output
