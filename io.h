#ifndef IO_H
#define IO_H

#define MIN_AMS 101

#include <tigcclib.h>

#include "matrix.h"
#include "point.h"

/**
	@enum An enumeration of keys
*/
enum KEYS{UP, DOWN, LEFT, RIGHT, PLUS, LESS, ESC, ENTER};

/**
	@brief Display a window that ask the user to open a file
	@return an Expression Stack Index where the opened file is stored
*/
ESI open_file();

/**
	@brief Initialized the keybord 
	@param an array of keys. As keys are identified with two hexadecimal number 
		    correponding at the location on the key bord, the structure point is used to store this location
*/
void SetClavier(point *v_key);

/**
	@brief Initialize a C matrix data structure from a matrix from the `TI matrix` editor
	@param The C matrix to me initialized
	@return A Stack Index pointing an `TI matrix`
*/
void InitMatrice(matrix *p_matrix, ESI EsiPtr);

#endif
