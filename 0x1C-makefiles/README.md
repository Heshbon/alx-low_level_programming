# In this project I practiced using Makefiles

Tasks

0. make -f 0-Makefile

	0-Makefile: Makefile that creates the executable: school includes;

	Rule all builds the executable.

1. make -f 1-Makefile

	0x1C-makefiles: Makefile that creates an executable: school with;

	Variable CC defines the compiler to be used.

	Variable SRC that defines the .c file to compile.


2. make -f 2-Makefile

	2-Makefile: Makefile that creates an executable school

	variables: CC, SRC, OBJ, NAME

	CC: the compiler to be used

	SRC: the .c files

	OBJ: the .o files

	NAME: the name of the executable.

	Rule should recompile only the updated source files.

3. make -f 3-Makefile 

	3-Makefile: Makefile that creates an excutable school

	all: builds your executabl

	clean: deletes all Emacs and Vim temporary files along with the executable.

	oclean: deletes the object files.

	fclean: deletes all Emacs and Vim temporary files, the executable, and the object files.

	re: forces recompilation of all source files

4. A complete Makefile

	4-Makefile: Makefile that creates an executable school with;

	fclean: deletes all Emacs and Vim temporary files, the executable, and the object files

	re: forces recompilation of all source files

5. Island Perimeter

	5-island_perimeter.py: Python function that returns the perimeter of the island described in grid:

	Prototype: def island_perimeter(grid):

	The parameter grid is a list of list of integers

	0 represents a water zone	
	
	1 represents a land zone

	One cell is a square with side length 1

	Grid cells are connected horizontally/vertically (not diagonally).

	Grid is rectangular, width and height don’t exceed 100

	Grid is completely surrounded by water, and there is one island (or nothing).

	The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
