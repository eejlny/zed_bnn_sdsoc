#include <stdio.h>
#include <stdlib.h>
#include <sds_lib.h>
#include "top.h"

int kernelbnn(
ap_uint<64> * in, ap_uint<64> * out, bool doInit,
unsigned int targetLayer, unsigned int targetMem,
unsigned int targetInd, ap_uint<64> val, unsigned int numReps,unsigned int psi, unsigned int pso)
{
  int k;
  BlackBoxJam(in,out, doInit,targetLayer,targetMem,targetInd,val,numReps,psi,pso);
  return k;
}
