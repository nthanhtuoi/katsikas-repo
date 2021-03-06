/* Include files */

#include "Demo1_sfun.h"
#include "c2_Demo1.h"
#include "c4_Demo1.h"
#include "c5_Demo1.h"
#include "c6_Demo1.h"
#include "c13_Demo1.h"
#include "c15_Demo1.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _Demo1MachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void Demo1_initializer(void)
{
}

void Demo1_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Demo1_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==2) {
    c2_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_Demo1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Demo1_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3991196468U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1739981003U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4162799444U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(397361925U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3457526966U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3559771143U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2600815405U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(423227561U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 2:
        {
          extern void sf_c2_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c2_Demo1_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c4_Demo1_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c5_Demo1_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c6_Demo1_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c13_Demo1_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_Demo1_get_check_sum(mxArray *plhs[]);
          sf_c15_Demo1_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3691397736U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2228706418U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(148782436U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4073970181U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3344170453U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2711447459U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2107069149U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(60261244U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Demo1_autoinheritance_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        extern mxArray *sf_c2_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c2_Demo1_get_autoinheritance_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c4_Demo1_get_autoinheritance_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c5_Demo1_get_autoinheritance_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c6_Demo1_get_autoinheritance_info();
        break;
      }

     case 13:
      {
        extern mxArray *sf_c13_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c13_Demo1_get_autoinheritance_info();
        break;
      }

     case 15:
      {
        extern mxArray *sf_c15_Demo1_get_autoinheritance_info(void);
        plhs[0] = sf_c15_Demo1_get_autoinheritance_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Demo1_get_eml_resolved_functions_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        extern const mxArray *sf_c2_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray *sf_c4_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray *sf_c5_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray *sf_c6_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray *sf_c13_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray *sf_c15_Demo1_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_Demo1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void Demo1_debug_initialize(void)
{
  _Demo1MachineNumber_ = sf_debug_initialize_machine("Demo1","sfun",0,6,0,0,0);
  sf_debug_set_machine_event_thresholds(_Demo1MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_Demo1MachineNumber_,0);
}

void Demo1_register_exported_symbols(SimStruct* S)
{
}
