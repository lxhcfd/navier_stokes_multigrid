// assemble matrix and vector
#ifndef IO_H
#define IO_H

#include "utils.h"

using namespace std;


// write out the sparse matrix
int write_matrix(cuint P,
				 cuint Q,
				 double** U);

// write out the sparse matrix
int write_vector( cuint P,
				  double* F);

// write out the results
int write_results( double* u,
				   cuint n_dof,
				   cuint I,
				   cuint J,
				   cuint K,
				   cdouble dx,
				   cdouble dy,
				   cdouble dz
				   );


#endif //IO_H