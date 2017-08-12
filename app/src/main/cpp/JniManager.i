%module JniManager
  
  
%{
#include <gloable.h>
#include <miracl.h>
#include <mirdef.h>
#include <SM2_ENC.h>
#include <SM4.h>
#include <KDF.h> 
#include <test1.h>
#include <sm.h>
%}
%include "sm.h";
%include "test1.h"
