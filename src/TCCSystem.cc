/******************************************************************************
* Copyright (c) 2000-2019 Ericsson Telecom AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v2.0
* which accompanies this distribution, and is available at
* https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
******************************************************************************/
///////////////////////////////////////////////////////////////////////////////
//
//  File:               TCCSystem.cc
//  Description:        TCC Useful Functions: System Functions
//  Rev:                R36B
//  Prodnr:             CNL 113 472
//
///////////////////////////////////////////////////////////////////////////////
#include "TCCSystem_Functions.hh"
#include <unistd.h>

namespace TCCSystem__Functions{

///////////////////////////////////////////////////////////////////////////////
//  Function: f_SYS_getpid
// 
//  Purpose:
//    Returns the pid of the process
//
//  Parameters:
//    -
// 
//  Return Value:
//    integer - pid
//
//  Errors:
//    - 
// 
//  Detailed description:
//    -
// 
///////////////////////////////////////////////////////////////////////////////
INTEGER f__SYS__getpid(){
  return getpid();
}

}
