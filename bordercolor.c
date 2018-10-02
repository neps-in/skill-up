/**
Color number representation

Color Number 123 would be 01110001 

7	6	5	4	3	2	1	0
|	|	|	|	|	|	|	1 ------------- BLUE		  -
|	|	|	|	|	|	1------------------ GREEN		  - Foreground
|	|	|	|	|	1---------------------- RED		      -
|	|	|	|	|
|	|	|	|	1-------------------------- INTENSITY BIT
|	|	|	|
|	|	|	1------------------------------ BLUE		  -
|	|	1---------------------------------- GREEN		  - Background
|	1-------------------------------------- RED			  -
|
|
1------------------------------------------ BLINK

Black - 0
Blue  - 1
Green - 2
Cyan  - 3
Red   - 4
Magenta - 5
Brown - 6
White - 7
L. Black  	- 8
L. Blue 	- 9
L. GREEN    - 10
L. Cyan     - 11
L. Red      - 12
L. Magenta  - 13
Yellow		- 14
INTwhile    - 15


**/

border_color( int colr ){
	union REGS i,o;

	i.h.ah=0x0B;
	i.x.bx=colr;

	int86(0x10, &i, &o);
}