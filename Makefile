.PHONY: clean 01 02 03

01: allocate_and_print_an_int.exe
	allocate_and_print_an_int.exe

allocate_and_print_an_int.exe:allocate_and_print_an_int.c
	gcc allocate_and_print_an_int.c -o allocate_and_print_an_int.exe

02: allocate_an_array_of_floats.exe
	allocate_an_array_of_floats.exe

allocate_an_array_of_floats.exe:allocate_an_array_of_floats.c
	gcc allocate_an_array_of_floats.c -o allocate_an_array_of_floats.exe
	
03: generic_function_with_void.exe
	generic_function_with_void.exe

generic_function_with_void.exe:generic_function_with_void.c
	gcc generic_function_with_void.c -o generic_function_with_void.exe
	
echo:
	@echo $(OS)
	
clean:
ifeq ($(OS),Windows_NT)
	del *.exe
else
	rm -f *.exe
endif