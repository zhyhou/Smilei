#ifndef SOLVER_H
#define SOLVER_H

#include "Params.h"

class ElectroMagn;

//  --------------------------------------------------------------------------------------------------------------------
//! Class Solver
//  --------------------------------------------------------------------------------------------------------------------
class Solver
{

public:
    //! Creator for Solver
    Solver( Params &params ) {};
    virtual ~Solver() {};
    
    virtual void coupling( Params &params, ElectroMagn *EMfields ) {};
    //! Overloading of () operator
    virtual void operator()( ElectroMagn *fields ) = 0;
    
protected:

};//END class

class NullSolver : public Solver
{

public:
    NullSolver( Params &params ) : Solver( params ) {};
    virtual ~NullSolver() {};
    
    //! Overloading of () operator
    virtual void operator()( ElectroMagn *fields ) {};
    
protected:

};//END class


#endif

