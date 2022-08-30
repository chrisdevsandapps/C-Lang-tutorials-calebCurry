


# VAR1 = x81to85Arrays1
# VAR1 = x86to87String1
# VAR1 = x88to92Functions1
# VAR1 = x88to92Functions2
# VAR1 = x93Refactoring1
VAR1 = x94to97Pointers1
# VAR1 = x94to97Pointers2
# VAR1 = x94to97Pointers3
# VAR1 = x98Structs1
# VAR1 = x98Structs2


VAR2 = hello

wow: $(VAR1).c
	gcc $(VAR1).c -o $(VAR2)
	# sleep 1
	# echo " "
	# clear
	./$(VAR2)

clear:
	rm $(VAR2)

